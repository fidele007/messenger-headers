/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBStarRatingsDialogMetadataConfig : NSObject <NSCoding, NSCopying> {

	BOOL _shouldShowImage;
	NSString* _title;
	NSString* _subtitle;
	NSString* _submitButton;
	NSString* _cancelButton;

}

@property (nonatomic,copy,readonly) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                  //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * submitButton;              //@synthesize submitButton=_submitButton - In the implementation block
@property (nonatomic,copy,readonly) NSString * cancelButton;              //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign,nonatomic) BOOL shouldShowImage;                        //@synthesize shouldShowImage=_shouldShowImage - In the implementation block
-(NSString *)submitButton;
-(BOOL)shouldShowImage;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 submitButton:(id)arg3 cancelButton:(id)arg4 shouldShowImage:(BOOL)arg5 ;
-(void)setShouldShowImage:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)subtitle;
-(NSString *)cancelButton;
-(id)dictionaryRepresentation;
@end

