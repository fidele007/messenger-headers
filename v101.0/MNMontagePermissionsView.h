/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/CKComponentHostingViewDelegate.h>

@protocol MNMontagePermissionsViewDelegate;
@class CKComponentHostingView, NSString;

@interface MNMontagePermissionsView : UIView <CKComponentHostingViewDelegate> {

	CKComponentHostingView* _componentHostingView;
	id<MNMontagePermissionsViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMontagePermissionsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(void)didRequestPermissions;
-(void)setDelegate:(id<MNMontagePermissionsViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNMontagePermissionsViewDelegate>)delegate;
-(id)initWithMode:(long long)arg1 ;
@end
