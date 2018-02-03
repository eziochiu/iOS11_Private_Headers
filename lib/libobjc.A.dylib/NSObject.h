/* made by EzioChiu
   Image: /usr/lib/libobjc.A.dylib
 */

@interface NSObject <CAAnimatableValue, CARenderValue, NSObject> {
    Class  isa;
}

@property (nonatomic, readonly) UIDescriptionBuilder *_ui_descriptionBuilder;
@property (nonatomic) struct CGPoint { double x1; double x2; } accessibilityActivationPoint;
@property (nonatomic, copy) NSAttributedString *accessibilityAttributedHint;
@property (nonatomic, copy) NSAttributedString *accessibilityAttributedLabel;
@property (nonatomic, copy) NSAttributedString *accessibilityAttributedValue;
@property (nonatomic) long long accessibilityContainerType;
@property (nonatomic, retain) NSArray *accessibilityCustomActions;
@property (nonatomic, retain) NSArray *accessibilityCustomRotors;
@property (nonatomic, retain) NSArray *accessibilityElements;
@property (nonatomic) bool accessibilityElementsHidden;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } accessibilityFrame;
@property (nonatomic, copy) NSArray *accessibilityHeaderElements;
@property (nonatomic, copy) NSString *accessibilityHint;
@property (nonatomic, copy) NSString *accessibilityIdentifier;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, retain) NSString *accessibilityLanguage;
@property (nonatomic, readonly) NSString *accessibilityLocalizedStringKey;
@property (nonatomic) long long accessibilityNavigationStyle;
@property (nonatomic, copy) UIBezierPath *accessibilityPath;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic) bool accessibilityViewIsModal;
@property (readonly, retain) id autoContentAccessingProxy;
@property (readonly) Class classForKeyedArchiver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAccessibilityElement;
@property void*observationInfo;
@property (nonatomic) bool shouldGroupAccessibilityChildren;
@property (readonly) Class superclass;
@property (getter=_traitStorageList, setter=_setTraitStorageList:, retain) _UITraitStorageList *traitStorageList;

// Image: /usr/lib/libobjc.A.dylib

+ (bool)_isDeallocating;
+ (bool)_tryRetain;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)allowsWeakReference;
+ (id)autorelease;
+ (Class)class;
+ (bool)conformsToProtocol:(id)arg1;
+ (id)copy;
+ (id)copyWithZone:(struct _NSZone { }*)arg1;
+ (void)dealloc;
+ (id)debugDescription;
+ (id)description;
+ (void)doesNotRecognizeSelector:(SEL)arg1;
+ (void)forwardInvocation:(id)arg1;
+ (id)forwardingTargetForSelector:(SEL)arg1;
+ (unsigned long long)hash;
+ (id)init;
+ (void)initialize;
+ (int (*)instanceMethodForSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (bool)isAncestorOfObject:(id)arg1;
+ (bool)isEqual:(id)arg1;
+ (bool)isFault;
+ (bool)isKindOfClass:(Class)arg1;
+ (bool)isMemberOfClass:(Class)arg1;
+ (bool)isProxy;
+ (bool)isSubclassOfClass:(Class)arg1;
+ (void)load;
+ (int (*)methodForSelector:(SEL)arg1;
+ (id)methodSignatureForSelector:(SEL)arg1;
+ (id)mutableCopy;
+ (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
+ (id)new;
+ (id)performSelector:(SEL)arg1;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
+ (oneway void)release;
+ (bool)resolveClassMethod:(SEL)arg1;
+ (bool)resolveInstanceMethod:(SEL)arg1;
+ (bool)respondsToSelector:(SEL)arg1;
+ (id)retain;
+ (unsigned long long)retainCount;
+ (bool)retainWeakReference;
+ (id)self;
+ (Class)superclass;
+ (struct _NSZone { }*)zone;

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (bool)allowsWeakReference;
- (id)autorelease;
- (Class)class;
- (bool)conformsToProtocol:(id)arg1;
- (id)copy;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (void)finalize;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isFault;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isMemberOfClass:(Class)arg1;
- (bool)isProxy;
- (int (*)methodForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)mutableCopy;
- (id)performSelector:(SEL)arg1;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (oneway void)release;
- (bool)respondsToSelector:(SEL)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (bool)retainWeakReference;
- (id)self;
- (Class)superclass;
- (struct _NSZone { }*)zone;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)__allocWithZone_OA:(struct _NSZone { }*)arg1;
+ (id)_copyDescription;
+ (void)dealloc;
+ (id)description;
+ (void)doesNotRecognizeSelector:(SEL)arg1;
+ (id)init;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (void)load;
+ (id)methodSignatureForSelector:(SEL)arg1;

- (bool)___tryRetain_OA;
- (id)__autorelease_OA;
- (void)__dealloc_zombie;
- (oneway void)__release_OA;
- (id)__retain_OA;
- (unsigned long long)_cfTypeID;
- (id)_copyDescription;
- (id)description;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (bool)isNSArray__;
- (bool)isNSCFConstantString__;
- (bool)isNSData__;
- (bool)isNSDate__;
- (bool)isNSDictionary__;
- (bool)isNSNumber__;
- (bool)isNSObject__;
- (bool)isNSOrderedSet__;
- (bool)isNSSet__;
- (bool)isNSString__;
- (bool)isNSTimeZone__;
- (bool)isNSValue__;
- (id)methodSignatureForSelector:(SEL)arg1;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

- (id)cl_json_serializeKey;
- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_createMutableArrayValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createMutableOrderedSetValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createMutableSetValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createOtherValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createOtherValueSetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createValuePrimitiveGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createValuePrimitiveSetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createValueSetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_keysForValuesAffectingValueForKey:(id)arg1;
+ (bool)_shouldAddObservationForwardersForKey:(id)arg1;
+ (bool)accessInstanceVariablesDirectly;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)cancelPreviousPerformRequestsWithTarget:(id)arg1;
+ (void)cancelPreviousPerformRequestsWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
+ (id)classFallbacksForKeyedArchiver;
+ (Class)classForKeyedUnarchiver;
+ (bool)implementsSelector:(SEL)arg1;
+ (bool)instancesImplementSelector:(SEL)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (void)load;
+ (id)replacementObjectForPortCoder:(id)arg1;
+ (void)setKeys:(id)arg1 triggerChangeNotificationsForDependentKey:(id)arg2;
+ (void)setVersion:(long long)arg1;
+ (long long)version;

- (void)_addObserver:(id)arg1 forProperty:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (bool)_allowsDirectEncoding;
- (void)_changeValueForKey:(id)arg1 key:(id)arg2 key:(id)arg3 usingBlock:(id /* block */)arg4;
- (void)_changeValueForKey:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_changeValueForKeys:(id*)arg1 count:(unsigned long long)arg2 maybeOldValuesDict:(id)arg3 usingBlock:(id /* block */)arg4;
- (void)_didChangeValuesForKeys:(id)arg1;
- (id)_implicitObservationInfo;
- (bool)_isKVOA;
- (bool)_isToManyChangeInformation;
- (void)_notifyObserversForKeyPath:(id)arg1 change:(id)arg2;
- (void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2;
- (id*)_observerStorage;
- (id)_pendingChangeNotificationsArrayForKey:(id)arg1 create:(bool)arg2;
- (void)_receiveBox:(id)arg1;
- (void)_removeObserver:(id)arg1 forProperty:(id)arg2;
- (void)_willChangeValuesForKeys:(id)arg1;
- (id)addChainedObservers:(id)arg1;
- (id)addObservationTransformer:(id /* block */)arg1;
- (id)addObserver:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (id)addObserver:(id)arg1 forObservableKeyPath:(id)arg2;
- (id)addObserverBlock:(id /* block */)arg1;
- (id)autoContentAccessingProxy;
- (id)awakeAfterUsingCoder:(id)arg1;
- (Class)classForArchiver;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (Class)classForPortCoder;
- (id)dictionaryWithValuesForKeys:(id)arg1;
- (void)didChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)didChangeValueForKey:(id)arg1;
- (void)didChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3;
- (void)finishObserving;
- (bool)implementsSelector:(SEL)arg1;
- (id)mutableArrayValueForKey:(id)arg1;
- (id)mutableArrayValueForKeyPath:(id)arg1;
- (id)mutableOrderedSetValueForKey:(id)arg1;
- (id)mutableOrderedSetValueForKeyPath:(id)arg1;
- (id)mutableSetValueForKey:(id)arg1;
- (id)mutableSetValueForKeyPath:(id)arg1;
- (void*)observationInfo;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)performSelector:(SEL)arg1 object:(id)arg2 afterDelay:(double)arg3;
- (void)performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(bool)arg4;
- (void)performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(bool)arg4 modes:(id)arg5;
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3;
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4;
- (void)performSelectorInBackground:(SEL)arg1 withObject:(id)arg2;
- (void)performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(bool)arg3;
- (void)performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(bool)arg3 modes:(id)arg4;
- (void)receiveObservedError:(id)arg1;
- (void)receiveObservedValue:(id)arg1;
- (void)removeObservation:(id)arg1;
- (void)removeObservation:(id)arg1 forObservableKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (id)replacementObjectForArchiver:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (id)replacementObjectForKeyedArchiver:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setObservation:(id)arg1 forObservingKeyPath:(id)arg2;
- (void)setObservationInfo:(void*)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (bool)validateValue:(inout id*)arg1 forKey:(id)arg2 error:(out id*)arg3;
- (bool)validateValue:(inout id*)arg1 forKeyPath:(id)arg2 error:(out id*)arg3;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)willChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)willChangeValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (id)CA_CAMLPropertyForKey:(id)arg1;
+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (bool)CA_encodesPropertyConditionally:(unsigned int)arg1 type:(int)arg2;
+ (int (*)CA_getterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;
+ (int (*)CA_setterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;

- (id)CAMLType;
- (id)CAMLTypeForKey:(id)arg1;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (unsigned long long)CA_copyNumericValue:(double)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (double)CA_distanceToValue:(id)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; bool x10; }*)arg4;
- (void)CA_prepareRenderValue;
- (id)CA_roundToIntegerFromValue:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/Frameworks/Security.framework/Security

+ (id)SFSQLiteClassName;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (long long)__accessibilityGuidedAccessRestrictionStateForIdentifier:(id)arg1;
+ (bool)__accessibilityGuidedAccessStateEnabled;
+ (void)__accessibilityRequestGuidedAccessSession:(bool)arg1 completion:(id /* block */)arg2;
+ (void)_installAppearanceSwizzlesForSetter:(id)arg1;

- (id)_NSItemProviderTypeCoercion_coercedUIImageValueFromNSDataValue:(id)arg1 error:(id*)arg2;
- (id)_NSItemProviderTypeCoercion_coercedUIImageValueFromNSURLValue:(id)arg1 error:(id*)arg2;
- (id)__autorotationSanityCheckObjectFromSource:(id)arg1 selector:(SEL)arg2;
- (id)__ivarDescriptionForClass:(Class)arg1;
- (id)__methodDescriptionForClass:(Class)arg1;
- (id)__propertyDescriptionForClass:(Class)arg1;
- (id)__ui_performAsyncSelector:(SEL)arg1 completionHandler:(id /* block */)arg2;
- (void)_accessibilityFinalize;
- (void)_applyTraitStorageRecordsForTraitCollection:(id)arg1;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;
- (id)_internalAccessibilityAttributedHint;
- (id)_internalAccessibilityAttributedLabel;
- (id)_internalAccessibilityAttributedValue;
- (void)_internalSetAccessibilityAttributedHint:(id)arg1;
- (void)_internalSetAccessibilityAttributedLabel:(id)arg1;
- (void)_internalSetAccessibilityAttributedValue:(id)arg1;
- (id)_ivarDescription;
- (id)_methodDescription;
- (id)_propertyDescription;
- (void)_setTraitStorageList:(id)arg1;
- (id)_shortMethodDescription;
- (id)_traitStorageList;
- (id)_ui_descriptionBuilder;
- (void)_uikit_applyValueFromTraitStorage:(id)arg1 forKeyPath:(id)arg2;
- (id)_uikit_valueForTraitCollection:(id)arg1;
- (bool)_uikit_variesByTraitCollections;
- (bool)accessibilityActivate;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (id)accessibilityAssistiveTechnologyFocusedIdentifiers;
- (id)accessibilityAttributedHint;
- (id)accessibilityAttributedLabel;
- (id)accessibilityAttributedValue;
- (id)accessibilityContainer;
- (long long)accessibilityContainerType;
- (id)accessibilityCustomActions;
- (id)accessibilityCustomRotors;
- (void)accessibilityDecrement;
- (id)accessibilityDragSourceDescriptors;
- (id)accessibilityDropPointDescriptors;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (bool)accessibilityElementIsFocused;
- (id)accessibilityElements;
- (bool)accessibilityElementsHidden;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHeaderElements;
- (id)accessibilityHint;
- (id)accessibilityIdentification;
- (id)accessibilityIdentifier;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (id)accessibilityLanguage;
- (id)accessibilityLocalizedStringKey;
- (long long)accessibilityNavigationStyle;
- (id)accessibilityPath;
- (bool)accessibilityPerformEscape;
- (bool)accessibilityPerformMagicTap;
- (bool)accessibilityScroll:(long long)arg1;
- (void)accessibilitySetIdentification:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)accessibilityViewIsModal;
- (void)awakeFromNib;
- (id)className;
- (unsigned long long)defaultAccessibilityTraits;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (bool)isAccessibilityElement;
- (bool)isAccessibilityElementByDefault;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (void)prepareForInterfaceBuilder;
- (void)setAccessibilityActivationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAccessibilityAttributedHint:(id)arg1;
- (void)setAccessibilityAttributedLabel:(id)arg1;
- (void)setAccessibilityAttributedValue:(id)arg1;
- (void)setAccessibilityContainer:(id)arg1;
- (void)setAccessibilityContainerType:(long long)arg1;
- (void)setAccessibilityCustomActions:(id)arg1;
- (void)setAccessibilityCustomRotors:(id)arg1;
- (void)setAccessibilityDragSourceDescriptors:(id)arg1;
- (void)setAccessibilityDropPointDescriptors:(id)arg1;
- (void)setAccessibilityElements:(id)arg1;
- (void)setAccessibilityElementsHidden:(bool)arg1;
- (void)setAccessibilityFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAccessibilityHeaderElements:(id)arg1;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityLanguage:(id)arg1;
- (void)setAccessibilityNavigationStyle:(long long)arg1;
- (void)setAccessibilityPath:(id)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setAccessibilityViewIsModal:(bool)arg1;
- (void)setIsAccessibilityElement:(bool)arg1;
- (void)setShouldGroupAccessibilityChildren:(bool)arg1;
- (bool)shouldGroupAccessibilityChildren;
- (id)storedAccessibilityActivationPoint;
- (id)storedAccessibilityContainerType;
- (id)storedAccessibilityElementsHidden;
- (id)storedAccessibilityFrame;
- (id)storedAccessibilityNavigationStyle;
- (id)storedAccessibilityTraits;
- (id)storedAccessibilityViewIsModal;
- (id)storedIsAccessibilityElement;
- (id)storedShouldGroupAccessibilityChildren;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (bool)un_safeBoolValue;

// Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport

- (id)pep_afterDelay:(double)arg1;
- (id)pep_getInvocation:(id*)arg1;
- (id)pep_onDetachedThread;
- (id)pep_onMainThread;
- (id)pep_onMainThreadIfNecessary;
- (id)pep_onOperationQueue:(id)arg1;
- (id)pep_onOperationQueue:(id)arg1 priority:(long long)arg2;
- (id)pep_onThread:(id)arg1;
- (id)pep_onThread:(id)arg1 immediateForMatchingThread:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (id)bs_dataFromObject:(id)arg1;
+ (id)bs_decodedFromData:(id)arg1;
+ (id)bs_objectFromData:(id)arg1;
+ (id)bs_secureDataFromObject:(id)arg1;
+ (id)bs_secureDecodedFromData:(id)arg1;
+ (id)bs_secureDecodedFromData:(id)arg1 withAdditionalClasses:(id)arg2;
+ (id)bs_secureObjectFromData:(id)arg1 ofClass:(Class)arg2;
+ (id)bs_secureObjectFromData:(id)arg1 ofClasses:(id)arg2;
+ (bool)bs_synchronousWrapper:(id /* block */)arg1 timeout:(double)arg2;

- (id)bs_encoded;
- (bool)bs_isPlistableType;
- (bool)bs_performSynchronously:(id /* block */)arg1;
- (bool)bs_performSynchronously:(id /* block */)arg1 timeout:(double)arg2;
- (id)bs_secureEncoded;

// Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial

- (void)allowSafePerformSelector;
- (void)disallowSafePerformSelector;
- (void)fromMainThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)fromNotifySafeThreadPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)fromNotifySafeThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (bool)okToNotifyFromThisThread;
- (void)postNotificationWithDescription:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices

+ (id)sbs_dataFromObject:(id)arg1;
+ (id)sbs_dataWithValue:(id)arg1;
+ (id)sbs_objectFromData:(id)arg1;
+ (id)sbs_valueFromData:(id)arg1 ofType:(const char *)arg2;

// Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore

- (id)_web_description;
- (void)releaseOnMainThread;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (id)_webkit_invokeOnMainThread;
+ (bool)isKeyExcludedFromWebScript:(const char *)arg1;
+ (bool)isSelectorExcludedFromWebScript:(SEL)arg1;

- (id)_webkit_invokeOnMainThread;

@end
