/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVPropFindItem : CoreDAVItem {
    CoreDAVItemWithNoChildren * _allProp;
    CoreDAVItem * _include;
    CoreDAVItem * _prop;
    CoreDAVItemWithNoChildren * _propName;
}

@property (nonatomic, retain) CoreDAVItemWithNoChildren *allProp;
@property (nonatomic, retain) CoreDAVItem *include;
@property (nonatomic, retain) CoreDAVItem *prop;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *propName;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)allProp;
- (id)description;
- (id)include;
- (id)init;
- (id)prop;
- (id)propName;
- (void)setAllProp:(id)arg1;
- (void)setInclude:(id)arg1;
- (void)setProp:(id)arg1;
- (void)setPropName:(id)arg1;

@end