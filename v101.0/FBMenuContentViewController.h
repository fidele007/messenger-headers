/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBMenuContentViewDelegate.h>

@class FBPopoverMenu, FBMenuContentView, NSArray, NSString;

@interface FBMenuContentViewController : UIViewController <FBMenuContentViewDelegate> {

	FBPopoverMenu* _popoverMenu;
	FBMenuContentView* _contentView;
	NSArray* _menuItems;

}

@property (nonatomic,copy) NSArray * menuItems;                     //@synthesize menuItems=_menuItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contentView:(id)arg1 tappedButton:(id)arg2 ;
-(id)initWithPopoverMenu:(id)arg1 ;
-(void)loadView;
-(CGSize)contentSizeForViewInPopover;
-(void)setMenuItems:(NSArray *)arg1 ;
-(NSArray *)menuItems;
@end

