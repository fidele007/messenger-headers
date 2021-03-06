/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMediaCreativeToolsEffectCellModel.h>

@protocol FBMediaCreativeToolFilter;
@class FBVideoProcessor;

@interface FBMediaCreativeToolsFilterCellModel : FBMediaCreativeToolsEffectCellModel {

	id<FBMediaCreativeToolFilter> _filter;
	FBVideoProcessor* _videoProcessor;

}

@property (nonatomic,readonly) id<FBMediaCreativeToolFilter> filter;              //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) FBVideoProcessor * videoProcessor;                 //@synthesize videoProcessor=_videoProcessor - In the implementation block
-(id)initWithFilter:(id)arg1 videoProcessor:(id)arg2 ;
-(FBVideoProcessor *)videoProcessor;
-(id<FBMediaCreativeToolFilter>)filter;
@end

