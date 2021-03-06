/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBPaymentsViewModelConfigurable.h>

@class UIImageView, FBRichTextView, UIView, MNPaymentsActorProfileViewModel, MNCDNProfileImageDownloader, NSString, UIImage;

@interface MNPaymentsActorProfileView : UIView <FBPaymentsViewModelConfigurable> {

	UIImageView* _profilePictureImageView;
	FBRichTextView* _titleTextView;
	FBRichTextView* _displayNameTextView;
	UIView* _bottomSeparatorView;
	MNPaymentsActorProfileViewParameters _parameters;
	MNPaymentsActorProfileViewModel* _viewModel;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	NSString* _currentUserId;
	UIImage* _rawImage;

}

@property (nonatomic,copy) MNPaymentsActorProfileViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProfileImageDownloader:(id)arg1 ;
-(double)textMinX;
-(void)_updateViewParameters;
-(void)_loadActorProfileImageWithUserId:(id)arg1 ;
-(void)_processImageWithDownloaderResponseImage:(id)arg1 withUserId:(id)arg2 ;
-(void)_updateProfileImageViewWithImage:(id)arg1 ;
-(void)_updateProfileImageAndDisplayName:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(MNPaymentsActorProfileViewModel *)viewModel;
-(void)setViewModel:(MNPaymentsActorProfileViewModel *)arg1 ;
@end

