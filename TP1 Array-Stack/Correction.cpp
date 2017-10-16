/********************/
/* Correstion TP1   */
/* STACK <--> ARRAY */
/********************/

/* INITIALISER TOUJOURS TOUTES LES VARIABLES -> pas de initialisation automatique commen en Java */

class Array {
    
    private :
    int n;
    int *tab;
    
public:
    Array(int t = 10){
        n(t);
        tab(new int [t]);
    }
    
    Array (const Array &a){
        n(a.n);
        tab(new int [A.n]);
        
        for(int i = 0; i < a.n; i++)tab[i] = a.tab[i];
    }
    ~Array(){
        delete[] tab;
        tab = NULL;
    }
    
    int const get(int i) return tab[i];
    void set (int i, int val)tab[i] = val;
    int& operator[](int i) return tab[i];
    
    void expand(int new N){
        if (new N <= n) return n;
        int* newTab = new int[new N];
        
        for (int i = 0; i<n; i++) {
            newTab[i] = tab[i];
            delete [] tab;
            n = new N;
            tab = newTab;
        }
    }
} /* FIN CLASS ARRAY */

/* Bien pour la réutilisabilité (surtour pour les class de bas niveaux -générale-) */
class Stack{
    private :
    int n;
    int size;
    int* tab;
    
    public :
    Stack(int t = 10):n(t), size(0), tab[new int[t]];
    Stack(const Stack &s): n(s.n), size(s.size), tab[new int [n]]{
        for (int i=0; i<n; i++) {
            tab[i] = s.tab[i];
        }
    }
    
    bool empty() return size==0;
    int top() return tab[sier-&];
    void pop() size--;
    void push(int val){
        if (size == n) expand (2*n);
        tab[size] = val;
        size++;
    }
    void expand(int new N){
        if (new N <= n) return n;
        int* newTab = new int[new N];
        
        for (int i = 0; i<n; i++) {
            newTab[i] = tab[i];
            delete [] tab;
            n = new N;
            tab = newTab;
        }
    }
}; /* Fin class Stack */

/* Comme en Java */
class Stack{ /* Stack par pointeur Array */
    
    /* Dans la mémoire :
     Stack : -Array -> Array : -tab -> pointeur sur tableau
             -size             -int
     */

    private:
    Array* arr;
    int size;
    
    public:
    Stack(int t= 10): arr(new Array(t)),size(0){ }
    Stack(const Stack &s):arr(new Array(*(s.arr))), size(s.size){}
    ~Stack() delete arr;
    
    bool empty() return size==0;
    int top() return arr->get(size-1); //<--> return (*arr)[size -1];
    void pop() size--;
    void push(int val){
        int n = arr->capacity();
        if (size == n) arr->expand(2*n);
        (*arr)[size] = val;
        size++;
    }
}; /* Fin class Stack par composition de pointeur Array */

/* meilleur solution par composition */
class Stack{ /* Stack par valeur Array */
    
    /* Dans la mémoire :
        Stack : -Array -> pointeur sur tableau
                -int
                -size
     */
private:
    Array arr;
    int size;
    
public:
    Stack(int t= 10): arr(t), size(0){ }
    Stack(const Stack &s):arr(s.arr), size(s.size){}
    ~Stack(){}
    
    bool empty() return size==0;
    int top() return arr[size-1]; //<--> return (*arr)[size -1];
    void pop() size--;
    void push(int val){
        int n = arr.capacity();
        if (size == n) arr.expand(2*n);
        arr[size] = val;
        size++;
    }
}; /* Fin class Stack par composition par valeur Array */

/* Assez bien -> pas d'erreur de recopie */
class Stack : private Array{
    /* Dérivation public très dangereux */
 
private:
    int size;
    
public:
    Stack(int t = 10): Array(t), size(0){ }
    Stack(const Stack &s):Array(s), size(s.size){}
    ~Stack(){}
    
    bool empty() return size==0;
    int top() return get[size-1]; //<--> return (*arr)[size -1];
    void pop() size--;
    void push(int val){
        int n = capacity();
        if (size == n) expand(2*n);
        set(size, val);
        size++;
    }
}; /* Fin class Stack par héritage Array */
