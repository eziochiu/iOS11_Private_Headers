/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVContainerMultiGetTask : CoreDAVTask <CoreDAVContainerMultiGetSubmittable> {
    NSSet * _additionalPropElements;
    Class  _appSpecificDataItemClass;
    NSString * _appSpecificDataProp;
    NSString * _appSpecificMultiGetCommand;
    NSString * _appSpecificMultiGetNameSpace;
    NSString * _appSpecificNamespace;
    NSSet * _deletedURLs;
    NSSet * _missingURLs;
    NSSet * _parsedContents;
    bool  _shouldIgnoreResponseErrors;
    NSSet * _urls;
}

@property (nonatomic) <CoreDAVAccountInfoProvider> *accountInfoProvider;
@property (nonatomic, retain) NSSet *additionalPropElements;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSSet *deletedURLs;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *missingURLs;
@property (nonatomic, readonly) NSSet *parsedContents;
@property (nonatomic) bool shouldIgnoreResponseErrors;
@property (readonly) Class superclass;
@property (nonatomic) <CoreDAVTaskManager> *taskManager;
@property (nonatomic) double timeoutInterval;

- (void).cxx_destruct;
- (id)additionalPropElements;
- (id)copyAdditionalPropElements;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)deletedURLs;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 appSpecificDataItemClass:(Class)arg3;
- (id)missingURLs;
- (id)parsedContents;
- (id)requestBody;
- (void)setAdditionalPropElements:(id)arg1;
- (void)setAdditionalProperties:(id)arg1 onDataItem:(id)arg2;
- (void)setShouldIgnoreResponseErrors:(bool)arg1;
- (bool)shouldIgnoreResponseErrors;

@end