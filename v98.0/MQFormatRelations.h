/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQFormatRelationsProtocol.h>

@class NSMutableDictionary, MSQModelDocumentContext, NSString;

@interface MQFormatRelations : NSObject <MQFormatRelationsProtocol> {

	NSMutableDictionary* _sCounter;
	MSQModelDocumentContext* _context;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupportedDocumentModelDictionary:(id)arg1 ;
+(BOOL)isSupportedDocumentModelAtPath:(id)arg1 ;
-(id)createDocumentModelWithDictionary:(id)arg1 fileController:(id)arg2 error:(id*)arg3 ;
-(id)getConstructor:(id)arg1 ;
-(void)validateModel:(id)arg1 ;
-(id)userFacingObjectNameForModelTagName:(id)arg1 ;
-(id)getConstructor:(id)arg1 identifier:(id)arg2 name:(id)arg3 ;
-(id)_uniqueIdentifierForModelWithTagName:(id)arg1 ;
-(id)_generateNameForNewModelWithTagName:(id)arg1 ;
-(long long)getModelCount:(id)arg1 ;
-(void)setModelCount:(long long)arg1 tagName:(id)arg2 ;
-(id)getConstructor:(id)arg1 name:(id)arg2 ;
-(id)createDocumentModelWithType:(id)arg1 ;
-(void)reset;
-(id)initWithContext:(id)arg1 ;
@end
