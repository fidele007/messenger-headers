/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MNGroupSuggestionItemBuilder : NSObject {

	unsigned long long _type;
	NSString* _name;
	NSString* _title;
	NSString* _subtitle;

}
+(id)groupSuggestionItem;
+(id)groupSuggestionItemFromExistingGroupSuggestionItem:(id)arg1 ;
-(id)withType:(unsigned long long)arg1 ;
-(id)withName:(id)arg1 ;
-(id)withSubtitle:(id)arg1 ;
-(id)withTitle:(id)arg1 ;
-(id)build;
@end
