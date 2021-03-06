/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBJSONStringifiable.h>

@class NSArray, NSString;

@interface FBFeedViewStateInfo : NSObject <FBJSONStringifiable> {

	BOOL _shimmeringStoriesStatus;
	NSArray* _itemInfos;
	double _contentInsetTop;
	double _contentOffsetY;
	double _viewYPositionInWindowCoordinates;
	double _viewHeight;

}

@property (nonatomic,copy,readonly) NSArray * itemInfos;                             //@synthesize itemInfos=_itemInfos - In the implementation block
@property (nonatomic,readonly) double contentInsetTop;                               //@synthesize contentInsetTop=_contentInsetTop - In the implementation block
@property (nonatomic,readonly) double contentOffsetY;                                //@synthesize contentOffsetY=_contentOffsetY - In the implementation block
@property (nonatomic,readonly) double viewYPositionInWindowCoordinates;              //@synthesize viewYPositionInWindowCoordinates=_viewYPositionInWindowCoordinates - In the implementation block
@property (nonatomic,readonly) double viewHeight;                                    //@synthesize viewHeight=_viewHeight - In the implementation block
@property (nonatomic,readonly) BOOL shimmeringStoriesStatus;                         //@synthesize shimmeringStoriesStatus=_shimmeringStoriesStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryForJSONification;
-(id)initWithItemInfos:(id)arg1 contentInsetTop:(double)arg2 contentOffsetY:(double)arg3 viewYPositionInWindowCoordinates:(double)arg4 viewHeight:(double)arg5 shimmeringStoriesStatus:(BOOL)arg6 ;
-(NSArray *)itemInfos;
-(double)contentInsetTop;
-(double)contentOffsetY;
-(double)viewYPositionInWindowCoordinates;
-(double)viewHeight;
-(BOOL)shimmeringStoriesStatus;
@end

