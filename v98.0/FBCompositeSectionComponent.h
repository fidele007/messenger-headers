/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSectionComponent.h>

@class FBSectionComponent;

@interface FBCompositeSectionComponent : FBSectionComponent {

	FBSectionComponent* _component;

}
+(id)newWithComponent:(id)arg1 ;
-(id)initWithComponent:(id)arg1 ;
-(void)componentDidAppear;
-(void)componentWillDisappear;
-(id)toSectionComponentHierarchy:(id)arg1 ;
-(id)changesetFromPreviousComponent:(id)arg1 ;
-(id)changesetToRemoveAll;
-(void)didAttachComponent;
-(void)didUnattachComponent;
-(void)didChangeComponentWithPreviousComponent:(id)arg1 userInfoFromStateUpdate:(id)arg2 ;
-(void)didScrollToBottom;
-(void)didScrollToTop;
-(void)didPullToRefresh;
-(void)didRequestReload;
-(void)didRequestPrefetchingData;
-(void)componentWillAppear;
-(void)componentDidDisappear;
-(long long)numberOfSections;
@end

