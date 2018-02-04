/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFCertificateWarningJSController : NSObject <SFCertificateWarningJSControllerMethods> {
    SFWebProcessPlugInCertificateWarningController * _certificateWarningController;
}

- (void).cxx_destruct;
- (void)goBackSelected;
- (id)initWithCertificateWarningController:(id)arg1;
- (void)openClockSettings;
- (void)pageLoaded;
- (void)showCertificateInformation;
- (void)visitInsecureWebsite;
- (void)visitInsecureWebsiteWithTemporaryBypass;

@end