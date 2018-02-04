/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolCSSDomainEventDispatcher : NSObject {
    struct AugmentableInspectorController { int (**x1)(); } * _controller;
}

- (id)initWithController:(struct AugmentableInspectorController { int (**x1)(); }*)arg1;
- (void)mediaQueryResultChanged;
- (void)namedFlowCreatedWithNamedFlow:(id)arg1;
- (void)namedFlowRemovedWithDocumentNodeId:(int)arg1 flowName:(id)arg2;
- (void)regionOversetChangedWithNamedFlow:(id)arg1;
- (void)registeredNamedFlowContentElementWithDocumentNodeId:(int)arg1 flowName:(id)arg2 contentNodeId:(int)arg3 nextContentNodeId:(int)arg4;
- (void)styleSheetAddedWithHeader:(id)arg1;
- (void)styleSheetChangedWithStyleSheetId:(id)arg1;
- (void)styleSheetRemovedWithStyleSheetId:(id)arg1;
- (void)unregisteredNamedFlowContentElementWithDocumentNodeId:(int)arg1 flowName:(id)arg2 contentNodeId:(int)arg3;

@end
