/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBSectionComponent.h>

@interface FBReloadableStackedSectionComponent : FBSectionComponent {

	vector<FBSectionComponent *, std::__1::allocator<FBSectionComponent *> >* _children;
	long long _numberOfSections;

}
+(id)newWithChildren:(const vector<FBSectionComponent *, std::__1::allocator<FBSectionComponent *> >*)arg1 ;
-(id)changesetFromPreviousComponent:(id)arg1 ;
-(id)changesetToRemoveAll;
-(void)didAttachComponent;
-(void)didUnattachComponent;
-(void)didScrollToBottom;
-(void)didScrollToTop;
-(void)didPullToRefresh;
-(void)didRequestReload;
-(void)didRequestPrefetchingData;
-(void)componentWillAppear;
-(void)componentDidDisappear;
-(void)addToCurrentScope;
-(void)componentDidAppear;
-(void)componentWillDisappear;
-(long long)numberOfSections;
@end

