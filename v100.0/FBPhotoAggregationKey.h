/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBPhotoAggregationKey : NSObject {

	NSString* _storyDeduplicationKey;
	NSString* _title;

}

@property (nonatomic,copy,readonly) NSString * storyDeduplicationKey;              //@synthesize storyDeduplicationKey=_storyDeduplicationKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                              //@synthesize title=_title - In the implementation block
-(NSString *)storyDeduplicationKey;
-(id)initWithStoryDeduplicationKey:(id)arg1 withTitle:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(NSString *)title;
@end

