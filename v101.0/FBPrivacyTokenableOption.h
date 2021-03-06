/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBEntityTokenable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, FBMemPerson, NSString, FBComposerPrivacySetting;

@interface FBPrivacyTokenableOption : NSObject <FBEntityTokenable, NSCopying> {

	UIImage* _tokenImage;
	UIImage* _tokenImageSelected;
	FBMemPerson* _person;
	NSString* _imageName;
	BOOL _selectable;
	BOOL _hidden;
	NSString* _title;
	NSString* _subtitle;
	FBComposerPrivacySetting* _privacySetting;
	unsigned long long _type;

}

@property (nonatomic,copy,readonly) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                    //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) FBComposerPrivacySetting * privacySetting;              //@synthesize privacySetting=_privacySetting - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                                   //@synthesize hidden=_hidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tokenableOptionWithPrivacy:(id)arg1 selectable:(BOOL)arg2 ;
+(id)tokenableOptionWithPrivacy:(id)arg1 ;
+(id)tokenableOptionForPerson:(id)arg1 ;
+(id)friendsOfTaggedOption;
+(id)anyoneTaggedOption;
+(id)tokenableOptionFromOption:(id)arg1 withTokenImage:(id)arg2 tokenImageSelected:(id)arg3 ;
-(id)graphQLID;
-(BOOL)isEqualToFBPrivacyTokenableOption:(id)arg1 ;
-(id)associatedPerson;
-(id)initWithType:(unsigned long long)arg1 privacySetting:(id)arg2 title:(id)arg3 subtitle:(id)arg4 imageName:(id)arg5 selectable:(BOOL)arg6 ;
-(void)_setPerson:(id)arg1 ;
-(void)_setTokenImage:(id)arg1 tokenImageSelected:(id)arg2 ;
-(id)tokenText;
-(id)tokenImage;
-(id)tokenImageSelected;
-(id)tableViewCellIcon;
-(id)tableViewCellGlyph;
-(void)setFriendsOfTagExpansion:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)type;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)subtitle;
-(BOOL)hidden;
-(FBComposerPrivacySetting *)privacySetting;
@end

