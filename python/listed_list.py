class Node:
    def __init__(self, data =None,next=None):
        self.data=data
        self.next=next

class LinkedList:
    def __init__(self) -> None:
        self.head=None
    def insert_at_beginning(self,data):
        node =Node(data,self.head)
        self.head=node
    def insert_at_end(self,data):
        #if the list is empty
        if self.head is None:
            self.head=Node(data, None)
        #if the list is not empty
        itr=self.head
        while itr.next:
            itr=itr.next
        itr.next=Node(data,None)
    def print(self):
        if self.head is None:
            print("list is empty")
            return
        
        itr =self.head
        llstr=''
        while itr:
            llstr+=str(itr.data)+'-->'
            itr=itr.next
        print(llstr)
# to wipe all the current values and new link list
    def insert_value(self,data_list):
        self.head=None
        for i in data_list:
           self.insert_at_end(i)
#to calculate the length of list
    def get_len(self):
        count=0
        itr=self.head
        while itr:
            count+=1
            itr=itr.next
        return count
#to remove something from the list:
    def remove_at(self,index):
        if index<0 or index>=self.get_len():
            raise Exception("Invalid")
        if index==0:
            self.head=self.head.next
            return
        count =0
        itr=self.head
        while itr:
            if count==index-1:
                itr.next=itr.next.next
                break
            itr=itr.next
            count+=1
    #to insert something
    def insert_at(self,index,data):
            if index<0 or index>=self.get_len():
                raise Exception("Invalid")
            if index==0:
                self.insert_at_beginning(data)
                return
            count=0 
            itr=self.head
            while itr:
                if count == index -1:
                    node=Node(data,itr.next)
                    itr.next=node
                    break
                itr=itr.next
                count+=1



if __name__ =='__main__':
    ll=LinkedList()
    ll.insert_at_beginning(45)
    ll.insert_at_beginning(59)
    ll.print()
    ll.insert_at_end(89)
    ll.print()
    ll.insert_value(["pineapple","mango","banana"])
    ll.print()
    print(ll.get_len())
    ll.print()
    ll.remove_at(2)
    ll.print()
    ll.insert_at(2,"figs")
    ll.print()
