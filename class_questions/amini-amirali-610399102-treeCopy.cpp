
//P name
//Fig : 
//use ?:
//date
//amiraliamini 610399102 UT-CS-99

//=================================================================================

#include <iostream>
#include <string>
#include<vector>
#include <iomanip>
#include<cstdlib>
using namespace std;


//----------------------------------------------------------------------------------



// Fig. 21.21: Tree.h
// Template Tree class definition.
#ifndef TREE_H
#define TREE_H

#include <iostream>
#include <new>


template< class NODETYPE > class Tree;

// TreeNode class-template definition
template< class NODETYPE >
class TreeNode
{
   friend class Tree< NODETYPE >;
public:
   // constructor
   TreeNode( NODETYPE &d ) //const
      : leftPtr( 0 ), // pointer to left subtree
	data( d ), // tree node data
	rightPtr( 0 ) // pointer to right substree
   {
      // empty body
   } // end TreeNode constructor

   // return copy of node's data
   NODETYPE getData() // const func
   {
      return data;
   } // end getData function
private:
   TreeNode< NODETYPE > *leftPtr; // pointer to left subtree
   NODETYPE data;
   TreeNode< NODETYPE > *rightPtr; // pointer to right subtree
}; // end class TreeNode


// Tree class-template definition
template< class NODETYPE > class Tree
{
public:
   Tree(); // constructor
   void insertNode( NODETYPE & ); //const
   void removeNode( NODETYPE & ); //const
   void preOrderTraversal()  const; 
   void inOrderTraversal() const; 
   void postOrderTraversal() const;
   void levelbylevelTraversal()  const; 

private:
   TreeNode< NODETYPE > *rootPtr;

   // utility functions
   void insertNodeHelper( TreeNode< NODETYPE > *&,  NODETYPE & ); //2 const
   void insertNodeHelperNr( TreeNode< NODETYPE > *&, NODETYPE &); //2 const
   void removeNodeHelperNr( TreeNode< NODETYPE > *&,  NODETYPE &); //2 const
   void preOrderHelper( TreeNode< NODETYPE > * )  const; 
   void inOrderHelper( TreeNode< NODETYPE > * ) const; 
   void postOrderHelper( TreeNode< NODETYPE > * ) const; 
   void levelbylevelHelper(TreeNode< NODETYPE > *) const; 

}; // end class Tree

// constructor
template< class NODETYPE >
Tree< NODETYPE >::Tree()
{
   rootPtr = 0; // indicate tree is initially empty
} // end Tree constructor

// insert node in Tree
template< class NODETYPE >
void Tree< NODETYPE >::insertNode( NODETYPE &value ) //const
{
   //insertNodeHelper( rootPtr, value );
   insertNodeHelperNr( rootPtr, value );
} // end function insertNode
// utility function called by insertNode; receives a pointer
// to a pointer so that the function can modify pointer's value
template< class NODETYPE >
void Tree< NODETYPE >::insertNodeHelper(
   TreeNode< NODETYPE > *&ptr, NODETYPE &value ) //2 const
{
   // subtree is empty; create new TreeNode containing value
   if ( ptr == 0 )
      ptr = new TreeNode< NODETYPE >( value );
   else // subtree is not empty
   {
      // data to insert is less than data in current node
      if ( value <  ptr->data )
	 insertNodeHelper( ptr->leftPtr , value );
      else
      {
	 // data to insert is greater than data in current node
	 if ( value > ptr->data )
	    insertNodeHelper(ptr->rightPtr , value );
	 else // duplicate data value ignored
	    cout << value << " dup" << endl;
      } // end else
   } // end else
} // end function insertNodeHelper
template< class NODETYPE >
void Tree< NODETYPE >::insertNodeHelperNr(
   TreeNode< NODETYPE > *&ptr,  NODETYPE &value ) //2 const
{
   TreeNode< NODETYPE > *p=ptr ;
   TreeNode< NODETYPE > *q=0 ;
   while(p) {
      q=p ;
      if ( value <  p->data )
	 p=p->leftPtr;
      else {
	 // data to insert is greater than data in current node
	 if ( value > p->data )
	    p=p->rightPtr ;
	 else { // duplicate data value ignored
	    cout << value << " dup" << endl;
	    return ;
	 }
      } // end else
   }
   p = new TreeNode< NODETYPE >( value );
   // subtree is empty; create new TreeNode containing value
   if ( ptr == 0 )
      ptr = p ;
   else { // subtree is not empty
      // data to insert is less than data in current node
      if ( value <  q->data )
	 q->leftPtr=p;
      else
	 q->rightPtr=p;
   } // end else
} // end function insertNodeHelper
// remove node in Tree
template< class NODETYPE >
void Tree< NODETYPE >::removeNode(  NODETYPE &value ) //const
{
   TreeNode< NODETYPE > *p=rootPtr ;
   if (rootPtr->data==value)
      removeNodeHelperNr( rootPtr, value );
   else
      removeNodeHelperNr( p, value );
   //rootPtr=p ;

} // end function removeNode
template< class NODETYPE >
void Tree< NODETYPE >::removeNodeHelperNr(
   TreeNode< NODETYPE > *&ptr, NODETYPE &value ) //2 const
{
//   TreeNode< NODETYPE > *ptr=ptrP ;
   TreeNode< NODETYPE > *p=0 ;
   TreeNode< NODETYPE > *q=0 ;
   TreeNode< NODETYPE > *c=0 ;

   while((ptr!=0) && (ptr->data != value)) {
      p=ptr ;
      if ( value <  ptr->data )
	 ptr=ptr->leftPtr;
      else
	 ptr=ptr->rightPtr ;
   }
   if(ptr==0) {
      cout << value << " is not found" << endl;
      return ;
   }
   q=ptr ;
   if ( q ->rightPtr==0) ptr=ptr->leftPtr ;
   else {
      if ( q->rightPtr->leftPtr==0 ) {
	 ptr=ptr->rightPtr;
	 ptr->leftPtr=q->leftPtr ;
      }
      else {
	  c=ptr->rightPtr;
	  while(c->leftPtr->leftPtr != 0)
		c=c->leftPtr;
	  ptr=c->leftPtr ;
	  c->leftPtr = ptr->rightPtr ;
	  ptr->leftPtr = q -> leftPtr ;
	  ptr->rightPtr = q -> rightPtr ;
      }
   }
   if(q->data <p->data) p->leftPtr = ptr ;
   else
      p->rightPtr = ptr ;
   delete q ;
} // end function insertNodeHelper

// begin preorder traversal of Tree
template< class NODETYPE >
void Tree< NODETYPE >::preOrderTraversal() const 
{
   preOrderHelper( rootPtr );
} // end function preOrderTraversal

// utility function to perform preorder traversal of Tree
template< class NODETYPE >
void Tree< NODETYPE >::preOrderHelper( TreeNode< NODETYPE > *ptr ) const 
{
   if ( ptr != 0 )
   {
      cout << ptr->data << ' '; // process node
      preOrderHelper( ptr->leftPtr ); // traverse left subtree
      preOrderHelper( ptr->rightPtr ); // traverse right subtree
   } // end if
} // end function preOrderHelper

// begin inorder traversal of Tree
template< class NODETYPE >
void Tree< NODETYPE >::inOrderTraversal() const 
{
   inOrderHelper( rootPtr );
} // end function inOrderTraversal

// utility function to perform inorder traversal of Tree
template< class NODETYPE >
void Tree< NODETYPE >::inOrderHelper( TreeNode< NODETYPE > *ptr ) const 
{
   if ( ptr != 0 )
   {
      inOrderHelper( ptr->leftPtr ); // traverse left subtree
      cout << ptr->data << ' '; // process node
      inOrderHelper( ptr->rightPtr ); // traverse right subtree
   } // end if
} // end function inOrderHelper

// begin postorder traversal of Tree
template< class NODETYPE >
void Tree< NODETYPE >::postOrderTraversal() const
{
   postOrderHelper( rootPtr );
} // end function postOrderTraversal

// utility function to perform postorder traversal of Tree
template< class NODETYPE >
void Tree< NODETYPE >::postOrderHelper(
   TreeNode< NODETYPE > *ptr ) const 
{
   if ( ptr != 0 )
   {
      postOrderHelper( ptr->leftPtr ); // traverse left subtree
      postOrderHelper( ptr->rightPtr ); // traverse right subtree
      cout << ptr->data << ' '; // process node
   } // end if
} // end function postOrderHelper

template< class NODETYPE >
void Tree< NODETYPE >::levelbylevelTraversal()  const 
{
   levelbylevelHelper( rootPtr );
} // end function postOrderTraversal

// utility function to perform postorder traversal of Tree
template< class NODETYPE >
void Tree< NODETYPE >::levelbylevelHelper(
   TreeNode< NODETYPE > *ptr )  const 
{
   Queue<TreeNode <NODETYPE>*> qu;
   qu.enqueue(ptr) ;
   while(!qu.isQueueEmpty()) {
       qu.dequeue(ptr) ;
       cout << ptr->data << ' ';
       if ( ptr ->leftPtr!=0)
	   qu.enqueue(ptr->leftPtr) ;
       if ( ptr ->rightPtr!=0)
	   qu.enqueue(ptr->rightPtr) ;
   }
} // end function postOrderHelper

#endif






int main () 
{
    int n , m ; 
    cin >> n ; 
    Tree <int > input ;
    for (int i =0 ; i < n ; i++ )
    {
        cin >> m ; 
        input . insertNode(m) ; 
    }
    Tree <int > copyInput ;

}