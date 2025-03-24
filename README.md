# Zookeeper's Challenge - C++ Design Document

## Data Structure Design
1. **Custom Linked List Template**
   ```cpp
   template<class T>
   class LinkedList {
       struct Node {
           T data;
           Node* next;
       };
       Node* head;
   public:
       void add(T item);
       T get(int index);
   };
   ```

2. **Species-Specific Lists**
   ```cpp
   LinkedList<Hyena> hyenas;
   LinkedList<Lion> lions;
   LinkedList<Tiger> tigers;
   LinkedList<Bear> bears;
   ```

## Class Structure
1. **Base Animal Class (Animal.h)**
   ```cpp
   class Animal {
   protected:
       int age;
       string gender;
       string birthSeason;
       string color;
       double weight;
       string origin;
       string species;
       string id;
   public:
       virtual void setId(int number) = 0;
       virtual string getDescription() const = 0;
   };
   ```

2. **Derived Classes**
   - Hyena.h, Lion.h, Tiger.h, Bear.h
   - Each implements setId() and getDescription()

## File Processing Design
1. **Input Handling**
   ```cpp
   ifstream inFile("C:/cpptxtfiles/arrivingAnimals.txt");
   string line1, line2;
   while(getline(inFile, line1) && getline(inFile, line2)) {
       // Parse animal data
       // Create appropriate animal object
       // Add to corresponding list
   }
   ```

2. **Output Generation**
   ```cpp
   ofstream outFile("C:/cpptxtfiles/newAnimals.txt");
   // Write habitat sections
   // Format: ID; description; arrival date
   ```

## Implementation Plan
1. **Phase 1: Core Classes**
   - [x] Animal.h base class
   - [ ] Species-specific derived classes
   - [ ] LinkedList template class

2. **Phase 2: File Operations**
   - [ ] Input file parsing
   - [ ] Animal object creation
   - [ ] Report generation

3. **Phase 3: Integration**
   - [ ] List management
   - [ ] Error handling
   - [ ] Testing
