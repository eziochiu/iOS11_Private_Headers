/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABCCallbackInvoker : NSObject {
    void * ab;
    int (* cb;
    void * context;
}

- (void)invoke;

@end
