/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>

@class MNGroupsTabManagerInjector, NSString;

@interface MNGroupsTabManager : NSObject <FBClassInjectable> {

	MNGroupsTabManagerInjector* _injector;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController*<MNListViewContaining>*<MNViewControllerAppearanceTransitioning> groupsTabViewController; 
@property (nonatomic,readonly) id<MNGroupsTabNavigationHandling> groupsTabNavigationHandler; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(BOOL)_shouldShowGroupsTabV2;
-(id<MNGroupsTabNavigationHandling>)groupsTabNavigationHandler;
-(UIViewController*<MNListViewContaining>*<MNViewControllerAppearanceTransitioning>)groupsTabViewController;
-(void)didInitGroupsTab;
-(void)tearDown;
@end

