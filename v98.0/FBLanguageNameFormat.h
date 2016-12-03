/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBLanguageNameFormat : FBValueObject <NSCopying> {

	BOOL _shortNameIsFullName;
	NSString* _nameSeparator;

}

@property (nonatomic,readonly) BOOL shortNameIsFullName;                   //@synthesize shortNameIsFullName=_shortNameIsFullName - In the implementation block
@property (nonatomic,copy,readonly) NSString * nameSeparator;              //@synthesize nameSeparator=_nameSeparator - In the implementation block
-(NSString *)nameSeparator;
-(BOOL)shortNameIsFullName;
-(id)initWithShortNameIsFullName:(BOOL)arg1 nameSeparator:(id)arg2 ;
@end

