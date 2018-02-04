/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSFeedElement : NSObject {
    NSDictionary * _attributes;
    NSMutableDictionary * _children;
    NSMutableString * _content;
    NSString * _name;
    NSString * _namespaceURI;
}

@property (nonatomic, copy) NSDictionary *attributes;
@property (nonatomic, readonly, copy) NSDictionary *children;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *namespaceURI;

- (void).cxx_destruct;
- (void)addChildElement:(id)arg1;
- (void)appendContent:(id)arg1;
- (id)attributes;
- (id)childWithName:(id)arg1;
- (id)children;
- (id)childrenWithName:(id)arg1;
- (id)childrenWithName:(id)arg1 namespace:(id)arg2;
- (id)content;
- (id)description;
- (id)init;
- (id)name;
- (id)namespaceURI;
- (void)setAttributes:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNamespaceURI:(id)arg1;
- (id)textOfChildWithName:(id)arg1;
- (id)textOfChildWithName:(id)arg1 namespace:(id)arg2;

@end
