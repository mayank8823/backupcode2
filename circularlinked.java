public class CircularLinkedList {

    static class Node {
      int data;
      Node next;
      Node() {}
      Node(int data) {
        this.data = data;
      }
    }
  
    private Node head;
    private Node tail;
  
    // constructor   
    public CircularLinkedList() {
      this.head = null;
      this.tail = null;
    }
  
    public boolean isEmpty() {
      return head == null;
    }

    public void insertAtFirst(int data) {
      Node newNode = new Node(data);   
      if (head == null) {   
        head = newNode;
        tail = newNode;
        newNode.next = head;
      } else {   
        Node temp = head;   
        newNode.next = temp;   
        head = newNode;   
        tail.next = head;
      }
    }
    public void deleteFirst() {
      if (head == null) {
        return;
      } else {
        if (head != tail) {
          head = head.next;
          tail.next = head;
        }  
        else {
          head = tail = null;
        }
      }
    }
    public void deleteLast() {
      if (head == null) {
        return;
      } else {
        if (head != tail) {
          Node current = head;
          while (current.next != tail) {
            current = current.next;
          }   
          tail = current;  
          tail.next = head;
        }   
        else {
          head = tail = null;
        }
      }
    }
    public void display() {
      Node temp = head;
      if (head != null) {
        do {
          System.out.printf("%d ", temp.data);
          temp = temp.next;
        } while (temp != head);
      }
      System.out.printf("\n");
    }
  
    public static void main(String[] args) {
      CircularLinkedList list = new CircularLinkedList();
      list.insertAtFirst(1);
      list.display();
      System.out.println("size :" + list.size());
      list.insertAtFirst(2);
      list.display();
      list.deleteNode(8);
      System.out.println("size :" + list.size());
      list.display();
    }
  }