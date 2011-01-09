/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSWeakCallback;



@interface NSConcreteHashTable : NSHashTable 
{
    struct NSSlice { 
        void **items; 
        BOOL wantsStrong; 
        BOOL wantsWeak; 
        BOOL shouldCopyIn; 
        BOOL usesStrong; 
        BOOL usesWeak; 
        BOOL usesSentinel; 
        BOOL pointerPersonality; 
        BOOL integerPersonality; 
        BOOL simpleReadClear; 
        NSWeakCallback *callback; 
        int (*sizeFunction)(); 
        int (*hashFunction)(); 
        int (*isEqualFunction)(); 
        int (*describeFunction)(); 
        int (*acquireFunction)(); 
        int (*relinquishFunction)(); 
        int (*allocateFunction)(); 
        int (*freeFunction)(); 
        int (*readAt)(); 
        int (*clearAt)(); 
        int (*storeAt)(); 
    } slice;
    NSUInteger count;
    NSUInteger capacity;
    NSUInteger options;
    NSUInteger mutations;
}


- (id)objectEnumerator;
- (id)allObjects;
- (void)finalize;
- (Class)classForCoder;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copy;
- (NSUInteger)count;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)addObject:(id)arg1;
- (void)raiseCountUnderflowException;
- (NSUInteger)rehashAround:(NSUInteger)arg1;
- (id)initWithOptions:(NSUInteger)arg1 capacity:(NSUInteger)arg2;
- (void)_initBlock;
- (id)initWithPointerFunctions:(id)arg1 capacity:(NSUInteger)arg2;
- (id)pointerFunctions;
- (void)hashGrow;
- (void)assign:(NSUInteger)arg1 key:(const void*)arg2;
- (void)rehash;
- (void)removeAllItems;
- (void*)getItem:(const void*)arg1;
- (void)insertItem:(const void*)arg1;
- (void)insertKnownAbsentItem:(const void*)arg1;
- (void)removeItem:(const void*)arg1;
- (void)getKeys:(void**)arg1 count:(NSUInteger*)arg2;

@end