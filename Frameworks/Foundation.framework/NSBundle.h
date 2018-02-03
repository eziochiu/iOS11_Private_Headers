/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSBundle : NSObject {
    id  _cfBundle;
    unsigned long long  _flags;
    id  _initialPath;
    id  _lock;
    Class  _principalClass;
    unsigned long long  _reserved2;
    id  _reserved3;
    id  _resolvedPath;
}

@property (readonly, copy) NSURL *appStoreReceiptURL;
@property (readonly, copy) NSString *builtInPlugInsPath;
@property (readonly, copy) NSURL *builtInPlugInsURL;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *bundlePath;
@property (readonly, copy) NSURL *bundleURL;
@property (readonly, copy) NSString *developmentLocalization;
@property (readonly, copy) NSArray *executableArchitectures;
@property (readonly, copy) NSString *executablePath;
@property (readonly, copy) NSURL *executableURL;
@property (readonly, copy) NSDictionary *infoDictionary;
@property (getter=isLoaded, readonly) bool loaded;
@property (readonly, copy) NSArray *localizations;
@property (readonly, copy) NSDictionary *localizedInfoDictionary;
@property (readonly, copy) NSArray *preferredLocalizations;
@property (readonly) Class principalClass;
@property (readonly, copy) NSString *privateFrameworksPath;
@property (readonly, copy) NSURL *privateFrameworksURL;
@property (readonly, copy) NSString *resourcePath;
@property (readonly, copy) NSURL *resourceURL;
@property (readonly, copy) NSString *sharedFrameworksPath;
@property (readonly, copy) NSURL *sharedFrameworksURL;
@property (readonly, copy) NSString *sharedSupportPath;
@property (readonly, copy) NSURL *sharedSupportURL;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundleWithURL:(id)arg4;
+ (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 inBundleWithURL:(id)arg3;
+ (id)allBundles;
+ (id)allFrameworks;
+ (id)bundleForClass:(Class)arg1;
+ (id)bundleWithIdentifier:(id)arg1;
+ (id)bundleWithPath:(id)arg1;
+ (id)bundleWithURL:(id)arg1;
+ (id)debugDescription;
+ (id)findBundleResourceURLsCallingMethod:(SEL)arg1 baseURL:(id)arg2 passingTest:(id /* block */)arg3;
+ (id)findBundleResources:(id)arg1 callingMethod:(SEL)arg2 directory:(id)arg3 languages:(id)arg4 name:(id)arg5 types:(id)arg6 limit:(unsigned long long)arg7;
+ (id)loadedBundles;
+ (id)mainBundle;
+ (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
+ (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
+ (id)preferredLocalizationsFromArray:(id)arg1;
+ (id)preferredLocalizationsFromArray:(id)arg1 forPreferences:(id)arg2;
+ (void)setSystemLanguages:(id)arg1;

- (id)URLForAuxiliaryExecutable:(id)arg1;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 localization:(id)arg4;
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2;
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 localization:(id)arg3;
- (void)__static;
- (struct __CFBundle { }*)_cfBundle;
- (struct __CFBundle { }*)_cfBundleIfPresent;
- (id)_pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forRegion:(id)arg4;
- (id)_pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forRegion:(id)arg3;
- (id)_regionsArray;
- (id)appStoreReceiptURL;
- (id)builtInPlugInsPath;
- (id)builtInPlugInsURL;
- (id)bundleIdentifier;
- (id)bundleLanguages;
- (id)bundlePath;
- (id)bundleURL;
- (Class)classNamed:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)developmentLocalization;
- (id)executableArchitectures;
- (id)executablePath;
- (id)executableURL;
- (id)findBundleResourceURLsCallingMethod:(SEL)arg1 passingTest:(id /* block */)arg2;
- (id)infoDictionary;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)invalidateResourceCache;
- (bool)isLoaded;
- (bool)load;
- (bool)loadAndReturnError:(id*)arg1;
- (id)localizations;
- (id)localizedInfoDictionary;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)objectForInfoDictionaryKey:(id)arg1;
- (id)pathForAuxiliaryExecutable:(id)arg1;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLanguage:(id)arg4;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLocalization:(id)arg4;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLanguage:(id)arg3;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLocalization:(id)arg3;
- (id)preferredLocalizations;
- (bool)preflightAndReturnError:(id*)arg1;
- (double)preservationPriorityForTag:(id)arg1;
- (Class)principalClass;
- (id)privateFrameworksPath;
- (id)privateFrameworksURL;
- (id)resourcePath;
- (id)resourceURL;
- (void)setPreservationPriority:(double)arg1 forTag:(id)arg2;
- (void)setPreservationPriority:(double)arg1 forTags:(id)arg2;
- (id)sharedFrameworksPath;
- (id)sharedFrameworksURL;
- (id)sharedSupportPath;
- (id)sharedSupportURL;
- (bool)unload;
- (unsigned long long)versionNumber;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_typologyBundle;
+ (id)currentNibLoadingBundle;
+ (id)currentNibPath;
+ (void)popNibLoadingBundle;
+ (void)popNibPath;
+ (void)pushNibLoadingBundle:(id)arg1;
+ (void)pushNibPath:(id)arg1;

- (id)dataForResourceName:(id)arg1;
- (id)loadNibNamed:(id)arg1 owner:(id)arg2 options:(id)arg3;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

+ (id)un_safeBundleWithURL:(id)arg1;

// Image: /bootstrap/Library/SBInject/AnemoneCore.dylib

+ (id)anemoneBundleWithFile:(id)arg1;

- (id)pathForResource:(id)arg1 ofType:(id)arg2;

@end
