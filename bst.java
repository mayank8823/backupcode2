public class bst {
    class Node {
        int key;
        Node left, right;
 
        public Node(int item) {
            key = item;
            left = right = null;
        }
    }

    Node root;

    bst() { root = null; }
 
    bst(int value) {
        root = new Node(value);
    }
 
    void insert(int key) {
        root = insertRec(root, key);
    }
 
    Node insertRec(Node root, int key) {

        if (root == null) {
            root = new Node(key);
            return root;
        }

        if (key < root.key)
            root.left = insertRec(root.left, key);
        else if (key > root.key)
            root.right = insertRec(root.right, key);

        return root;
    }
 
   
    void inorder() { inorderhelp(root); }
    void preorder() { preorderhelp(root); }
    void postorder() { postorderhelp(root); }
 
   
    void inorderhelp(Node root) {
        if (root == null) {
            return;
        }
            inorderhelp(root.left);
            System.out.print(root.key+" ");
            inorderhelp(root.right);
        
    }

    void preorderhelp(Node root) {
        if (root == null) {
            return;
        }
            
            System.out.print(root.key+" ");
            preorderhelp(root.left);
            preorderhelp(root.right);
        
    }


    void postorderhelp(Node root) {
        if (root == null) {
            return;
        }
            postorderhelp(root.left);
            
            postorderhelp(root.right);

            System.out.print(root.key+" ");
        
    }

    
 
    
    public static void main(String[] args) {
        
        bst tree = new bst();

        tree.insert(52);
        tree.insert(3);
        tree.insert(43);
        tree.insert(12);
        tree.insert(8);
        tree.insert(34);
        tree.insert(96);
        System.out.println("Inorder");
        tree.inorder();
        System.out.println();
        System.out.println("Preorder");
        tree.preorder();
        System.out.println();
        System.out.println("Postorder");
        tree.postorder();
    }
}
