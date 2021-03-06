/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCaptureCoordinatorFilterController, FBMPFilter;
@class NSString;

@interface FBCaptureCoordinatorFilter : NSObject {

	NSString* _name;
	id<FBCaptureCoordinatorFilterController> _filterController;
	long long _framerateCap;
	id<FBMPFilter> _filter;

}

@property (nonatomic,readonly) id<FBMPFilter> filter;                                                  //@synthesize filter=_filter - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) id<FBCaptureCoordinatorFilterController> filterController;              //@synthesize filterController=_filterController - In the implementation block
@property (nonatomic,readonly) long long framerateCap;                                                 //@synthesize framerateCap=_framerateCap - In the implementation block
-(id<FBCaptureCoordinatorFilterController>)filterController;
-(id)initWithName:(id)arg1 filter:(id)arg2 controller:(id)arg3 framerateCap:(long long)arg4 ;
-(id)videoEditsFilterConfigIfAvailable;
-(long long)framerateCap;
-(id)initWithName:(id)arg1 filter:(id)arg2 controller:(id)arg3 ;
-(NSString *)name;
-(id<FBMPFilter>)filter;
@end

