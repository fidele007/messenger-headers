/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSectionComponent.h>

@class FBSectionComponent;

@interface FBHidableSectionComponent : FBSectionComponent {

	FBSectionComponent* _component;
	BOOL _isHidden;

}
+(id)newWithComponent:(id)arg1 isHidden:(BOOL)arg2 ;
+(id)newWithComponent:(id)arg1 isHidden:(BOOL)arg2 identifier:(id)arg3 ;
-(void)didRequestPrefetchingData;
-(void)didScrollToBottom;
-(void)didScrollToTop;
-(void)didRequestReload;
-(void)didPullToRefresh;
-(void)componentWillAppear;
-(void)componentDidAppear;
-(void)componentWillDisappear;
-(void)componentDidDisappear;
-(void)didChangeComponentWithPreviousComponent:(id)arg1 userInfoFromStateUpdate:(id)arg2 ;
-(id)changesetFromPreviousComponent:(id)arg1 ;
-(id)changesetToRemoveAll;
-(void)didAttachComponent;
-(void)didUnattachComponent;
-(id)toSectionComponentHierarchy:(id)arg1 ;
-(void)addToCurrentScope;
-(long long)numberOfSections;
@end
