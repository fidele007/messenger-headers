/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRichStoryEntityBylineProtocol.h>

@class FBMemTextWithEntities, NSArray, NSString;

@interface FBRichStoryEntityByline : NSObject <FBRichStoryEntityBylineProtocol> {

	FBMemTextWithEntities* _textWithEntities;
	NSArray* _profiles;

}

@property (nonatomic,retain) FBMemTextWithEntities * textWithEntities;              //@synthesize textWithEntities=_textWithEntities - In the implementation block
@property (nonatomic,copy) NSArray * profiles;                                      //@synthesize profiles=_profiles - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bylineWithTextWithEntities:(id)arg1 profiles:(id)arg2 ;
-(FBMemTextWithEntities *)textWithEntities;
-(void)setTextWithEntities:(FBMemTextWithEntities *)arg1 ;
-(NSArray *)profiles;
-(void)setProfiles:(NSArray *)arg1 ;
@end

