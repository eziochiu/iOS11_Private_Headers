/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMSPIHandle : NSObject {
    int  _abIdentifier;
    NSString * _address;
    IMPerson * _person;
}

@property int abIdentifier;
@property (retain) NSString *address;
@property (readonly) NSString *cnContactID;
@property (readonly) NSString *displayName;
@property (readonly) NSString *identifier;
@property (retain) IMPerson *person;

- (void).cxx_destruct;
- (int)abIdentifier;
- (id)address;
- (id)cnContactID;
- (id)description;
- (id)displayName;
- (id)identifier;
- (id)person;
- (void)setAbIdentifier:(int)arg1;
- (void)setAddress:(id)arg1;
- (void)setPerson:(id)arg1;

@end
