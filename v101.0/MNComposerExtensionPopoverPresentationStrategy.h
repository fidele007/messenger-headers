/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNComposerExtensionPresentationStrategy.h>

@class UIViewController, NSString;

@interface MNComposerExtensionPopoverPresentationStrategy : NSObject <MNComposerExtensionPresentationStrategy> {

	UIViewController* _viewController;
	/*^block*/id _viewControllerCreationBlock;
	long long _style;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long style;                     //@synthesize style=_style - In the implementation block
-(id)initWithViewControllerCreationBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldAutoRotate;
-(void)present:(id)arg1 ;
-(BOOL)isPresented:(id)arg1 ;
-(BOOL)requiresTextEditing:(id)arg1 ;
-(BOOL)isViewControllerLoaded;
-(long long)style;
-(id)viewController;
-(void)dismiss:(id)arg1 ;
@end
