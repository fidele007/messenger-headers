/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class FBSectionComponent;

@interface FBSectionComponentController : NSObject {

	BOOL _hasLoaded;
	FBSectionComponent* _component;
	id<NSObject> _componentControllerContext;

}

@property (__weak) id<NSObject> componentControllerContext;                        //@synthesize componentControllerContext=_componentControllerContext - In the implementation block
@property (nonatomic,__weak,readonly) FBSectionComponent * component;              //@synthesize component=_component - In the implementation block
-(void)componentDidAppear;
-(void)componentWillDisappear;
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
-(void)willAttachComponent:(id)arg1 ;
-(id<NSObject>)componentControllerContext;
-(void)setComponentControllerContext:(id<NSObject>)arg1 ;
-(FBSectionComponent *)component;
-(void)didLoad;
@end

