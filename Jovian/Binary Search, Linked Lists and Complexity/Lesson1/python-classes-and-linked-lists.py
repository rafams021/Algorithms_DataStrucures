#!/usr/bin/env python
# coding: utf-8

# # Introduction to Python Classes and Linked Lists
# 
# ### Part 2 of "Data Structures and Algorithms in Python"
# 
# [Data Structures and Algorithms in Python](https://jovian.ai/learn/data-structures-and-algorithms-in-python) is a beginner-friendly introduction to common data structures (linked lists, stacks, queues, graphs) and algorithms (search, sorting, recursion, dynamic programming) in Python, designed to help you prepare for coding interviews and assessments. 

# ## How to Run the Code
# 
# The best way to learn the material is to execute the code and experiment with it yourself. This tutorial is an executable [Jupyter notebook](https://jupyter.org). You can _run_ this tutorial and experiment with the code examples in a couple of ways: *using free online resources* (recommended) or *on your computer*.
# 
# #### Option 1: Running using free online resources (1-click, recommended)
# 
# The easiest way to start executing the code is to click the **Run** button at the top of this page and select **Run on Binder**. You can also select "Run on Colab" or "Run on Kaggle", but you'll need to create an account on [Google Colab](https://colab.research.google.com) or [Kaggle](https://kaggle.com) to use these platforms.
# 
# 
# #### Option 2: Running on your computer locally
# 
# To run the code on your computer locally, you'll need to set up [Python](https://www.python.org), download the notebook and install the required libraries. We recommend using the [Conda](https://docs.conda.io/projects/conda/en/latest/user-guide/install/) distribution of Python. Click the **Run** button at the top of this page, select the **Run Locally** option, and follow the instructions.
# 
# >  **Jupyter Notebooks**: This notebook is made of _cells_. Each cell can contain code written in Python or explanations in plain English. You can execute code cells and view the results instantly within the notebook. Jupyter is a powerful platform for experimentation and analysis. Don't be afraid to mess around with the code & break things - you'll learn a lot by encountering and fixing errors. You can use the "Kernel > Restart & Clear Output" menu option to clear all outputs and start again from the top.

# ## Problem
# 
# In this notebook, we'll focus our discussion on the following problem:
# 
# > **QUESTION**: Write a function to reverse a linked list
# 
# Before we answer this question, we need to answer:
# 
# - What do we mean by linked list? 
# - How do we create a linked list in Python?
# - How do we store numbers in a linked list?
# - How do we retrieve numbers in a linked list
# 

# In[1]:


get_ipython().system('pip install jovian --upgrade --quiet')


# In[2]:


import jovian


# In[3]:


jovian.commit()


# ## Linked List
# 
# A linked list is a _data structure_ used for storing a sequence of elements. It's data with some structure (the sequence).
# 
# ![](https://cdn.programiz.com/sites/tutorial2program/files/linked-list-concept_0.png)
# 
# We'll implement linked lists which support the following operations:
# 
# - Create a list with given elements
# - Display the elements in a list
# - Find the number of elements in a list
# - Retrieve the element at a given position
# - Add or remove element(s)
# - (can you think of any more?)

# ### A Quick Primer on Classes in Python
# 
# Let's create a class for it. A class is a blueprint for creating objects. 

# In[4]:


class Node():
    pass


# We can create an object with nothing in it.

# In[5]:


Node()


# We just created an object of the class `Node`. However, we have to have a way to access the object. We can do so by creating a variable.

# In[6]:


node1 = Node()


# The *variable* `node1` holds a reference the object, and can be used to retrieve the object.

# In[7]:


node1


# When we call the `Node()` again, it creates a new object.

# In[8]:


node2 = Node()


# In[9]:


node2


# You can tell that the objects are different because they are at different addresses in the RAM (more on that later).

# We can have multiple variables pointing to the same object.

# In[10]:


node3 = node1


# In[11]:


node3


# Our object isn't doing much. Let's give it the ability to store a value. First, we'll store the constant value 0. We can do this using a *constructor*.

# In[12]:


class Node():
    def __init__(self):
        self.data = 0


# Two things to note:
# * The double underscores
# * The self (a replacement for `this`)
# * `self.data` creates a property called. We can name a property anything we wish (`val`, `number`, `the_thing_inside` etc. )

# In[13]:


node4 = Node()


# So internally what's happening is that Python first creates an empty object, stores the reference to the empty object in an temporary variable called `self`, calls the `__init__` function with `self` as the argument, which then sets the property `data` on the created object with the value 0.

# In[14]:


node4.data


# And we can change the value inside the variable.

# In[15]:


node4.data = 10


# In[16]:


node4.data


# Let's create nodes with the values 2, 3 and 5

# In[17]:


node1 = Node()
node1.data = 2


# In[18]:


node2 = Node()
node2.data = 3


# In[19]:


node3 = Node()
node3.data = 5


# In[20]:


node1.data, node2.data, node3.data


# While this is OK, there's an easier way to do it.

# In[21]:


class Node():
    def __init__(self, a_number):
        self.data = a_number
        self.next = None


# In[22]:


node1 = Node(2)
node2 = Node(3)
node3 = Node(5)


# In[23]:


node1.data, node2.data, node3.data


# Now we are ready to define a class for our Linked list.

# In[24]:


class LinkedList():
    def __init__(self):
        self.head = None


# In[25]:


list1 = LinkedList()


# In[26]:


list1.head = Node(2)


# In[27]:


list1.head.next = Node(3)


# In[28]:


list1.head.next.next = Node(4)


# In[29]:


list1.head.data, list1.head.next.data, list1.head.next.next.data


# ![](https://cdn.programiz.com/sites/tutorial2program/files/linked-list-concept_0.png)

# In[30]:


list1.head, list1.head.next, list1.head.next.next, list1.head.next.next.next


# While it's OK to set value like this, we can add a couple of arguments.

# In[31]:


class LinkedList():
    def __init__(self):
        self.head = None
        
    def append(self, value):
        if self.head is None:
            self.head = Node(value)
        else:
            current_node = self.head
            while current_node.next is not None:
                current_node = current_node.next
            current_node.next = Node(value)


# In[32]:


list2 = LinkedList()
list2.append(2)
list2.append(3)
list2.append(5)


# In[33]:


list2.head.data, list2.head.next.data, list2.head.next.next.data


# Next, let's add a method to print the value in a list.

# In[34]:


class LinkedList():
    def __init__(self):
        self.head = None
        
    def append(self, value):
        if self.head is None:
            self.head = Node(value)
        else:
            current_node = self.head
            while current_node.next is not None:
                current_node = current_node.next
            current_node.next = Node(value)
            
    def show_elements(self):
        current = self.head
        while current is not None:
            print(current.data)
            current = current.next


# In[35]:


list2 = LinkedList()
list2.append(2)
list2.append(3)
list2.append(5)


# In[36]:


list2.show_elements()


# Let's add a couple of more functions: `length` and `get_element` to get an element at a specific position.

# In[37]:


class LinkedList():
    def __init__(self):
        self.head = None
        
    def append(self, value):
        if self.head is None:
            self.head = Node(value)
        else:
            current_node = self.head
            while current_node.next is not None:
                current_node = current_node.next
            current_node.next = Node(value)
            
    def show_elements(self):
        current = self.head
        while current is not None:
            print(current.data)
            current = current.next
            
    def length(self):
        result = 0
        current = self.head
        while current is not None:
            result += 1
            current = current.next
        return result
            
    def get_element(self, position):
        i = 0
        current = self.head
        while current is not None:
            if i == position:
                return current.data
            current = current.next
            i += 1
        return None


# In[38]:


list2 = LinkedList()
list2.append(2)
list2.append(3)
list2.append(5)
list2.append(9)


# In[39]:


list2.length()


# In[40]:


list2.get_element(0)


# In[41]:


list2.get_element(1)


# In[42]:


list2.get_element(2)


# In[43]:


list2.get_element(3)


# Given a list of size `N`, the the number of statements executed for each of the steps:
# 
# - `append`: N steps
# - `length`: N steps
# - `get_element`: N steps
# - `show_element`: N steps
# 

# ## Reversing a Linked List - Solution
# 
# Here's a simple program to reverse a linked list.

# In[44]:


def reverse(l):
    if l.head is None:
        return
    
    current_node = l.head
    prev_node = None
    
    while current_node is not None:
        # Track the next node
        next_node = current_node.next
        
        # Modify the current node
        current_node.next = prev_node
        
        # Update prev and current
        prev_node = current_node
        current_node = next_node
        
    l.head = prev_node


# In[45]:


list2 = LinkedList()
list2.append(2)
list2.append(3)
list2.append(5)
list2.append(9)


# In[46]:


reverse(list2)


# In[47]:


list2.show_elements()


# That's how you reverse a linked list!

# In[48]:


import jovian


# In[ ]:


jovian.commit()


# In[ ]:




