/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBComposerGoodwillCampaignAttachment : FBValueObject <NSCopying, NSCoding> {

	NSString* _name;
	NSString* _identifier;
	NSString* _source;
	NSString* _sharingKey;

}

@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * source;                  //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSString * sharingKey;              //@synthesize sharingKey=_sharingKey - In the implementation block
-(id)initWithName:(id)arg1 identifier:(id)arg2 source:(id)arg3 sharingKey:(id)arg4 ;
-(NSString *)sharingKey;
-(NSString *)name;
-(NSString *)identifier;
-(NSString *)source;
@end

