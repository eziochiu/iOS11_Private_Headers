/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

@interface ICQServiceView : UIView {
    UILabel * _descriptionLabel;
    UIImageView * _imageView;
    _ICQServiceSpecification * _serviceSpecification;
}

@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) _ICQServiceSpecification *serviceSpecification;

- (void).cxx_destruct;
- (id)descriptionLabel;
- (id)imageView;
- (id)serviceSpecification;
- (void)setDescriptionLabel:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setServiceSpecification:(id)arg1;

@end
