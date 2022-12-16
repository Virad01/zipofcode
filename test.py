



#As Per The Given Question 

filled = 0
number = 30
row = 0
tempFilled = -1

def construct(Grid):
    seats = []
    for i in Grid:
        rows = i[1]
        cols = i[0]
        # mat = [[-1]*cols]*rows
        mat = []
        for i in range(rows):
            mat.append([-1]*cols)
        seats.append(mat)
    return seats

def printSeats(seats):
    testsize = len(str(number))
    rows = [x[1] for x in Grid]
    cols = [x[0] for x in Grid]
    maximum = max(rows)
    top = True
    for i in range(maximum):
        rowlist = []
        rowlistl = []
        for j in range(length):
            row = ' '
            rowl = ' '
            if len(seats[j]) <= i:
                for k in range(cols[j]):
                    row += ' '*testsize
                    rowl += ' '*testsize
                    row += ' '
                    rowl += ' '
            else:
                row = '|'
                rowl = '+'
                for k in seats[j][i]:
                    if k == -1:
                        row += ' '*testsize
                        rowl += '-'*testsize
                        row += '|'
                        rowl += '+'
                    else:
                        row += str(k)+(' '*(testsize - len(str(k))))
                        rowl += '-'*testsize
                        row += '|'
                        rowl += '+'
            
            rowlist.append(row)
            rowlistl.append(rowl)
        if top:
            print('    '.join(rowlistl))
            top = False
        print('    '.join(rowlist))
        print('    '.join(rowlistl))

                
def fill_aisle_seats():
   
    global filled
    row = 0
    tempFilled = -1
    while filled < number and filled != tempFilled:
        tempFilled = filled
        for i in range(length):
            if Grid[i][1] > row:
                if i == 0 and Grid[i][0] > 1:
                    filled += 1
                    aisleCol = Grid[i][0] - 1
                    seats[i][row][aisleCol] = filled
                    if filled >= number:
                        break
                elif i == length - 1 and Grid[i][0] > 1:
                    filled += 1
                    aisleCol = 0
                    seats[i][row][aisleCol] = filled
                    if filled >= number:
                        break
                else:
                    filled += 1
                    aisleCol = 0
                    seats[i][row][aisleCol] = filled
                    if filled >= number:
                        break
                    if Grid[i][0] > 1:
                        filled += 1
                        aisleCol = Grid[i][0] - 1
                        seats[i][row][aisleCol] = filled
                        if filled >= number:
                            break
        row += 1


def fill_window_seats():
    row = 0
    global filled
    global number
    tempFilled = 0
    while filled < number and filled != tempFilled:
        tempFilled = filled
        if Grid[0][1] > row:
            filled += 1
            window = 0
            seats[0][row][window] = filled
            if filled >= number:
                break
        if Grid[length-1][1] > row:
            filled += 1
            window = Grid[length-1][0] - 1
            seats[length-1][row][window] = filled
            if filled >= number:
                break
        row += 1

def fill_middle_seats():
    row = 0
    tempFilled = 0
    global filled
    while filled < number and filled != tempFilled:
        tempFilled = filled
        for i in range(length):
            if Grid[i][1] > row:
                if Grid[i][0] > 2:
                    for col in range(1, Grid[i][0] - 1):
                        filled += 1
                        seats[i][row][col] = filled
                        if filled >= number:
                            break
        row += 1


Grid = [[3,4], [4,5], [2,3], [3,4]]
seats = construct(Grid)
# print seats
length = len(Grid)


fill_aisle_seats()


fill_window_seats()

row = 0
tempFilled = 0
fill_middle_seats()


printSeats(seats)