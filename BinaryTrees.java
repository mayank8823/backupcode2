import java.util.*;
public class BinaryTrees{
    static class Node{
        int data;
        Node left;
        Node right;
        Node(int data){
            this.data=data;
            this.left=null;
            this.right=null;
        }
    }
    static class BinaryTree{
        static int idx=-1;
        public static Node buildTree(int nodes[]){
            idx++;     // isse index=0 ho jayega which implies hmlog root
            // node pr aa gye jo ki 1 hai
            if(nodes[idx]==-1){
                return null;
            }
            Node newNode=new Node(nodes[idx]);
            newNode.left=buildTree(nodes);
            newNode.right=buildTree(nodes);
            return newNode;
        }
    }
    public static void Preorder(Node root){
        if(root==null){
            return;
        }
        System.out.print(root.data+" ");
        Preorder(root.left);
        Preorder(root.right);
    }
    // preorder me sbse pehle root ka data leta hai phir left subtree ka
    // then right subtree ka
    // time complexity : O(N)
    // Input :              1
    //                 2          3
    //           4          5               6

    // expected output : 1 2 4 5 3 6

    public static void Inorder(Node root){
        if(root==null){
            return;
        }
        Inorder(root.left);
        System.out.print(root.data+" ");
        Inorder(root.right);
    }
    // Inorder me sbse pehle left subtree ka data lete hai then root ka and uske 
    // baad right subtree ka.
    // Time Complexity : O(N)
    // Input :              1
    //                 2          3
    //           4          5               6

    // expected output : 4 2 5 1 3 6

    public static void Postorder(Node root){
        if(root==null){
            return;
        }
        Postorder(root.left);
        Postorder(root.right);
        System.out.print(root.data+" ");
    }
    // Postorder me sbse pehle left subtree ka data lete hai then
    // right subtree ka and last me root ka data lete hai
    //Time Complexity : O(N)
    // Input :              1
    //                 2          3
    //           4          5               6

    // expected output : 4 5 2 6 3 1

    // Level Order Traversal works on the principle of BFS that is
    // Break First Search property and rest of the traversal we learned 
    // works in the basis of DFS that is Depth First Search

    public static void Levelorder(Node root){
        if(root==null){
            return;
        }
        Queue<Node>q=new LinkedList<>();
        q.add(root);
        q.add(null);
        while(!q.isEmpty()){
            Node currNode=q.remove();
            if(currNode==null){
                System.out.println();
                if(q.isEmpty()){
                    break;
                }else{
                    q.add(null);
                }
            }else{
                System.out.print(currNode.data+" ");
                if(currNode.left!=null){
                    q.add(currNode.left);
                }
                if(currNode.right!=null){
                    q.add(currNode.right);
                }
            }
        }
    }

    // Level order me level wise data print hota hao
    // isme queue data structure ka use kiya jata hai
    // Time Complexity : O(N)

    // Input :              1
    //                 2          3
    //           4          5               6

    // expected output :    1
    //                    2        3
    //                4       5        6

    
    public static void main(String args[]){
        int nodes[]={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
        BinaryTree tree=new BinaryTree();
        Node root=tree.buildTree(nodes);
        System.out.println(root.data);     // root ka data print krega which is 1
        System.out.println("Preorder ");
        Preorder(root);
        System.out.println();
        System.out.println("Inorder");
        Inorder(root);
        System.out.println();
        System.out.println("Postorder");
        Postorder(root);
        System.out.println();
        System.out.println("Levelorder");
        Levelorder(root);
    }
}