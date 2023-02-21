class Table:
    def __init__(self):
        self.headers = []
        self.widths = []

    def setHeaders(self, headers):
        self.headers = headers

    def setBorderTable(self):
        border = "+"
        for i in range(len(self.widths)):
            border += "-" * (self.widths[i] + 2) + "+"
        return border

    def setWidths(self, widths):
        self.widths = widths
        self.border = self.setBorderTable()

    def displayHeader(self):
        print("\n" + self.border)
        print("|", end="")
        for i in range(len(self.headers)):
            print(" " + self.headers[i].ljust(self.widths[i]) + " |", end="")
        print("\n" + self.border)

    def displayData(self, data):
        for i in range(len(data)):
            print("|", end="")
            for j in range(len(self.headers)):
                if j == 0:
                    print(" " + "{:<{}}".format(str(i+1), self.widths[j]), end=" |")
                else:
                    print(" " + data[i][j-1].ljust(self.widths[j]) + " |", end="")
            print()

        print(self.border + "\n")

    # method border untuk membuat border dengan simbol yang diinginkan
    def getBorder(self, length, symbol):
        border = symbol * length
        return border