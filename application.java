public class application {
    public static class node{
        Object data;
        node next;
        node(Object data){
            this.data = data;
            next = null;
        }
   }
   node head;
   int count = -1;
   public void push(Object data){
      node  new_node = new node(data);
      if(head == null){
          head = new_node;
       count ++; 
   }
       else{
           new_node.next = head;
           head = new_node;
           count++;
       }
   }
    public static void main(String args[])
{
    Stack s = new Stack();
    s.push(20);
    s.push(21);
    s.push(510);
    s.push(31);
    s.print();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    System.out.println();
    System.out.println("aryan");
    System.out.println("sharma");
    s.push(11);
    s.print();
    s.peek();
   
    s.empty();
    }
}