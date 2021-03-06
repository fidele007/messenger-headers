/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBRichStoryEntity;
#import <Messenger/Messenger-Structs.h>
@interface FBRichStoryAttributedEntity : NSObject {

	id<FBRichStoryEntity> _entity;
	long long _type;
	NSRange _range;

}

@property (nonatomic,retain) id<FBRichStoryEntity> entity;              //@synthesize entity=_entity - In the implementation block
@property (assign,nonatomic) NSRange range;                             //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) long long type;                            //@synthesize type=_type - In the implementation block
+(id)attributedEntityWithEntity:(id)arg1 range:(NSRange)arg2 type:(long long)arg3 ;
-(id)initWithEntity:(id)arg1 range:(NSRange)arg2 type:(long long)arg3 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(id<FBRichStoryEntity>)entity;
-(void)setEntity:(id<FBRichStoryEntity>)arg1 ;
@end

