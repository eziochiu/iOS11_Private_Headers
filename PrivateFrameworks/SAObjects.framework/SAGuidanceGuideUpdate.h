/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGuidanceGuideUpdate : SABaseClientBoundCommand

@property (nonatomic, retain) SAGuidanceGuideSnippet *guideSnippet;
@property (nonatomic, copy) NSNumber *guideTag;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, retain) SAGuidanceSuggestedUtterances *suggestedUtterances;
@property (nonatomic, copy) NSNumber *suggestedUtterancesTag;

+ (id)guideUpdate;
+ (id)guideUpdateWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)guideSnippet;
- (id)guideTag;
- (id)languageCode;
- (bool)requiresResponse;
- (void)setGuideSnippet:(id)arg1;
- (void)setGuideTag:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setSuggestedUtterances:(id)arg1;
- (void)setSuggestedUtterancesTag:(id)arg1;
- (id)suggestedUtterances;
- (id)suggestedUtterancesTag;

@end
