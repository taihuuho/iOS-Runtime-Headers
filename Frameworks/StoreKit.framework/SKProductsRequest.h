/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */



@interface SKProductsRequest : SKRequest 
{
    id _productsRequestInternal;
}

@property <SKProductsRequestDelegate> *delegate;


- (id)init;
- (void)dealloc;
- (BOOL)handleFinishResponse:(id)arg1 returningError:(id*)arg2;
- (id)initWithProductIdentifiers:(id)arg1;
- (void)issueRequestForIdentifier:(id)arg1;
- (id)_newResponseFromDictionary:(id)arg1;

@end