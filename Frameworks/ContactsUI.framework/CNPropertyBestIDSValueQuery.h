/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPropertyBestIDSValueQuery : NSObject {
    <CNPropertyBestIDSValueQueryDelegate> * _delegate;
    <CNCancelable> * _idsLookupToken;
    NSArray * _propertyItems;
    NSMutableArray * _validIDSItems;
}

@property (nonatomic, readonly) CNPropertyGroupItem *bestIDSProperty;
@property (nonatomic) <CNPropertyBestIDSValueQueryDelegate> *delegate;
@property (nonatomic, retain) <CNCancelable> *idsLookupToken;
@property (nonatomic, retain) NSArray *propertyItems;
@property (nonatomic, retain) NSMutableArray *validIDSItems;

- (void).cxx_destruct;
- (id)bestIDSProperty;
- (void)cancel;
- (id)delegate;
- (id)idsLookupToken;
- (id)initWithPropertyItems:(id)arg1 service:(id)arg2;
- (id)initWithPropertyItems:(id)arg1 service:(id)arg2 idsAvailabilityProvider:(id)arg3 schedulerProvider:(id)arg4;
- (id)propertyItems;
- (void)setDelegate:(id)arg1;
- (void)setIdsLookupToken:(id)arg1;
- (void)setPropertyItems:(id)arg1;
- (void)setValidIDSItems:(id)arg1;
- (id)validIDSItems;

@end