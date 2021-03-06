/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:43 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FNFPlayerCaptionParser.h>

@class NSString, NSMutableString, NSMutableArray;

@interface FNFCaptionParser : NSObject <FNFPlayerCaptionParser> {

	int _captionMode;
	int _captionRowCount;
	NSString* _captionToDisplay;
	NSMutableString* _captionBuffer;
	NSMutableString* _captionTextPayloadBuffer;
	NSMutableArray* _captionFragments;
	BOOL _parserAlwaysOn;

}
-(id)getCaption;
-(void)_parseSEIUnit:(char*)arg1 unitLength:(unsigned)arg2 presentationTimeStamp:(SCD_Struct_FB43)arg3 ;
-(void)_buildCaptionUptoTimeStamp:(SCD_Struct_FB43)arg1 ;
-(void)_parseUserDataRegisteredItuT35:(char*)arg1 payloadSize:(unsigned)arg2 presentationTimeStamp:(SCD_Struct_FB43)arg3 ;
-(void)_parseCaptionPayload:(char*)arg1 captionCount:(unsigned)arg2 presentationTimeStamp:(SCD_Struct_FB43)arg3 ;
-(void)_parseSpecialNorthAmericanCharacterFromCCData:(unsigned char)arg1 ;
-(void)_parseExtendedSpanishMiscellaneousFrenchCharacterFromCCData:(unsigned char)arg1 ;
-(void)_parseExtendedPortugueseGermanDanishCharacterFromCCData:(unsigned char)arg1 ;
-(void)_parseBasicNorthAmericanCharacterFromCCData:(unsigned char)arg1 ;
-(void)_addCaptionFragment:(id)arg1 ;
-(void)_parseControlCharacterFromCCData1:(unsigned char)arg1 ccData2:(unsigned char)arg2 presentationTimeStamp:(SCD_Struct_FB43)arg3 ;
-(void)_parseControlCharacterFromCCData2:(unsigned char)arg1 ;
-(void)_buildCaptionToDisplay;
-(void)_setCaptionMode:(int)arg1 ;
-(void)_appendCarriageReturn;
-(BOOL)canParseCaptionTypeInMPDAccessibilityDescription:(id)arg1 ;
-(void)parseFrameData:(const char*)arg1 frameDataSize:(unsigned long long)arg2 presentationTimeStamp:(SCD_Struct_FB43)arg3 playbackTimeStamp:(SCD_Struct_FB43)arg4 ;
-(void)reset;
-(void)_deleteLastCharacter;
-(id)initWithSession:(id)arg1 ;
@end

