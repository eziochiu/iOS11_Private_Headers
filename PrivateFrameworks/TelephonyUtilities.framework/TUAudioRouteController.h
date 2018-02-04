/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAudioRouteController : NSObject {
    TUAudioSystemController * _audioSystemController;
    <TUCallContainerPrivate> * _callContainer;
    NSHashTable * _delegates;
    TUAudioRoute * _pickedRoute;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) long long audioRoutesCount;
@property (nonatomic, readonly) TUAudioSystemController *audioSystemController;
@property (getter=areAuxiliaryAudioRoutesAvailable, nonatomic, readonly) bool auxiliaryAudioRoutesAvailable;
@property (nonatomic, readonly) <TUCallContainerPrivate> *callContainer;
@property (nonatomic, readonly) TUCall *callForPickableRoutes;
@property (nonatomic, readonly) NSHashTable *delegates;
@property (nonatomic, retain) TUAudioRoute *pickedRoute;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (getter=isReceiverRouteAvailable, nonatomic, readonly) bool receiverRouteAvailable;
@property (getter=isReceiverRoutePicked, nonatomic, readonly) bool receiverRoutePicked;
@property (getter=isSpeakerRouteAvailable, nonatomic, readonly) bool speakerRouteAvailable;
@property (getter=isSpeakerRoutePicked, nonatomic, readonly) bool speakerRoutePicked;

- (void).cxx_destruct;
- (void)_audioRouteInformationChanged:(id)arg1;
- (id)_audioRoutesFromRouteDictionaries:(id)arg1;
- (void)_pickRoute:(id)arg1;
- (id)_pickableRoutes;
- (id)_pickableRoutesForCategory:(id)arg1 mode:(id)arg2;
- (void)addDelegate:(id)arg1;
- (bool)areAuxiliaryAudioRoutesAvailable;
- (long long)audioRoutesCount;
- (id)audioSystemController;
- (id)callContainer;
- (id)callForPickableRoutes;
- (void)clearCachedRoutes;
- (void)dealloc;
- (id)delegates;
- (void)enumerateRoutesUsingBlock:(id /* block */)arg1;
- (id)initWithCallContainer:(id)arg1 audioSystemController:(id)arg2 queue:(id)arg3;
- (bool)isReceiverRouteAvailable;
- (bool)isReceiverRoutePicked;
- (bool)isRouteAvailableForDeviceModelType:(long long)arg1;
- (bool)isSpeakerRouteAvailable;
- (bool)isSpeakerRoutePicked;
- (void)pickDefaultRoute;
- (void)pickReceiverRoute;
- (void)pickRouteWithUniqueIdentifier:(id)arg1;
- (void)pickSpeakerRoute;
- (id)pickedRoute;
- (id)queue;
- (void)removeDelegate:(id)arg1;
- (void)setPickedRoute:(id)arg1;

@end
