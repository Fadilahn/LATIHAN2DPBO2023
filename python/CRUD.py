class CRUD:
    def __init__(self):
        self.data = []

    def create(self, obj):
        self.data.append(obj)

    def read(self):
        return self.data

    def update(self, index, obj):
        self.data[index] = obj

    def delete(self, index):
        del self.data[index]

    def getCount(self):
        return len(self.data)

    def getData(self):
        rows = []
        for obj in self.data:
            rows.append(obj.getFieldValues())
        return rows