def insertFirst(self.item):
    newNode = Node()
    newNode.item = item
    if count == 0:
        first = last = newNode
        newNode.next = newNode.prev=None
        else:
            newNode.next = self.first
            newNode.prev = None
            self.first.prev = newNode
            self.first = newNode