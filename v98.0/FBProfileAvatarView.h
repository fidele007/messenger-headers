/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBWebImageViewListener.h>
#import <Messenger/FBUIConfigurable.h>
#import <Messenger/FBUIThreadSafeSizable.h>

@protocol FBProfileAvatarViewDelegate;
@class FBWebImageView, NSString;

@interface FBProfileAvatarView : UIView <FBWebImageViewListener, FBUIConfigurable, FBUIThreadSafeSizable> {

	FBWebImageView* _imageView;
	BOOL _didSetImage;
	id<FBProfileAvatarViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBProfileAvatarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithConfig:(id)arg1 ;
+(CGSize)threadSafeSizeThatFits:(id)arg1 size:(CGSize)arg2 ;
+(id)newWithProfileID:(id)arg1 size:(unsigned long long)arg2 style:(unsigned long long)arg3 placeholderIdentifier:(id)arg4 placeholderImage:(id)arg5 scenePath:(id)arg6 analyticsTags:(id)arg7 ;
+(id)newWithUserSession:(id)arg1 profileID:(id)arg2 size:(unsigned long long)arg3 style:(unsigned long long)arg4 placeholderIdentifier:(id)arg5 placeholderImage:(id)arg6 scenePath:(id)arg7 analyticsTags:(id)arg8 ;
+(void)preloadWithUserSession:(id)arg1 profileID:(id)arg2 size:(unsigned long long)arg3 scenePath:(id)arg4 analyticsTags:(id)arg5 ;
+(id)defaultFBUIConfig;
-(void)webImageViewDidSetImage:(id)arg1 fromCache:(BOOL)arg2 ;
-(void)_setupAccessibility;
-(void)_setupImageViewWithConfig:(id)arg1 ;
-(id)_downloaderFactoryForUserSessionLoader:(/*^block*/id)arg1 ;
-(id)_placeholderViewWithIdentifier:(id)arg1 image:(id)arg2 length:(double)arg3 style:(unsigned long long)arg4 customFilter:(id)arg5 ;
-(void)_notifyDelegateOfDidSetImage;
-(void)oldConfig:(id)arg1 configDidChange:(id)arg2 ;
-(void)setDelegate:(id<FBProfileAvatarViewDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBProfileAvatarViewDelegate>)delegate;
-(id)_init;
-(id)config;
-(void)applyConfig:(id)arg1 ;
@end
