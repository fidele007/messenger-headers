/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBLanguageNameFormatFactory, FBLazyCreator;

@interface MNThreadParticipantNameFormatter : NSObject {

	FBLanguageNameFormatFactory* _languageNameFormatFactory;
	FBLazyCreator* _languageNameFormatCreator;

}
-(id)shortNameForUser:(id)arg1 ;
-(id)initWithLanguageNameFormatFactory:(id)arg1 ;
-(id)nameListForFormattableNames:(id)arg1 useFullName:(BOOL)arg2 truncateAt:(unsigned long long)arg3 ;
-(id)nameForUser:(id)arg1 ;
-(id)shortNameForUserId:(id)arg1 inUserSet:(id)arg2 ;
-(id)shortNameForConversationContact:(id)arg1 ;
-(id)nameForConversationContact:(id)arg1 ;
-(id)nameListForUserIds:(id)arg1 inUserSet:(id)arg2 customizationInfo:(id)arg3 truncateAt:(unsigned long long)arg4 ;
-(id)nameListForUsers:(id)arg1 customizationInfo:(id)arg2 formatString:(id)arg3 useFullName:(BOOL)arg4 maxNames:(unsigned long long)arg5 minNames:(unsigned long long)arg6 maxWidth:(double)arg7 font:(id)arg8 moreParticipantsFormat:(unsigned long long)arg9 ;
-(id)nameListForUsers:(id)arg1 customizationInfo:(id)arg2 useFullName:(BOOL)arg3 truncateAt:(unsigned long long)arg4 ;
-(id)nameListForConversationContacts:(id)arg1 formatString:(id)arg2 useFullName:(BOOL)arg3 maxNames:(unsigned long long)arg4 minNames:(unsigned long long)arg5 maxWidth:(double)arg6 font:(id)arg7 ;
-(id)nameForFormattableName:(id)arg1 ;
-(id)shortNameForFormattableName:(id)arg1 ;
-(id)nameListForFormattableNames:(id)arg1 formatString:(id)arg2 useFullName:(BOOL)arg3 maxNames:(unsigned long long)arg4 minNames:(unsigned long long)arg5 maxWidth:(double)arg6 font:(id)arg7 ;
-(id)nameForParticipant:(id)arg1 ;
-(id)shortNameForParticipant:(id)arg1 ;
-(id)nameListForParticipants:(id)arg1 useFullName:(BOOL)arg2 truncateAt:(unsigned long long)arg3 ;
-(id)nameListForParticipants:(id)arg1 formatString:(id)arg2 useFullName:(BOOL)arg3 maxNames:(unsigned long long)arg4 minNames:(unsigned long long)arg5 maxWidth:(double)arg6 font:(id)arg7 ;
-(id)_nameForUserWithName:(id)arg1 email:(id)arg2 ;
-(id)_shortNameForUserWithName:(id)arg1 firstName:(id)arg2 email:(id)arg3 ;
-(id)_repeatedNamesForUsers:(id)arg1 ;
-(id)_shortNameForUser:(id)arg1 inRepeatedNameSet:(id)arg2 ;
-(id)_namesForUsers:(id)arg1 customizationInfo:(id)arg2 useFullName:(BOOL)arg3 ;
-(id)_namesForUserIds:(id)arg1 inUserSet:(id)arg2 customizationInfo:(id)arg3 useFullName:(BOOL)arg4 ;
-(id)_namesForContacts:(id)arg1 useFullName:(BOOL)arg2 ;
-(id)_namesForFormattableNames:(id)arg1 useFullName:(BOOL)arg2 ;
-(id)_sizeLimitedJoinedStringForNames:(id)arg1 formatString:(id)arg2 maxNames:(unsigned long long)arg3 minNames:(unsigned long long)arg4 maxWidth:(double)arg5 font:(id)arg6 moreParticipantsFormat:(unsigned long long)arg7 ;
-(id)_formatName:(id)arg1 ;
-(id)nameListForConversationContacts:(id)arg1 useFullName:(BOOL)arg2 truncateAt:(unsigned long long)arg3 ;
-(id)nameListForUserIds:(id)arg1 inUserSet:(id)arg2 customizationInfo:(id)arg3 formatString:(id)arg4 maxNames:(unsigned long long)arg5 minNames:(unsigned long long)arg6 maxWidth:(double)arg7 font:(id)arg8 ;
@end

