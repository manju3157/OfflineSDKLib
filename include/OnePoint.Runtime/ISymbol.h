//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/chinthan/Framework/Logger/ConvertCode/OnePoint/Runtime/Expressions/Helpers/SymbolManagement/ISymbol.java
//
//  Created by chinthan on 1/6/14.
//

#ifndef _ISymbol_H_
#define _ISymbol_H_

#import "Descriptor.h"
#import "SymbolTable.h"
#import "SymbolType.h"



@protocol ISymbol < NSObject >
- (SymbolTable *)getChildren;
- (void)setChildrenWithSymbolTable:(SymbolTable *)value;
- (void)setCollectionWithNSString:(NSString *)value;
- (void)setDescriptionWithNSString:(NSString *)value;
- (Descriptor *)getDescriptor;
- (void)setDescriptorWithDescriptor:(Descriptor *)value;
- (BOOL)getIsExternal;
- (void)setIsExternalWithBoolean:(BOOL)value;
- (NSString *)getName;
- (void)setNameWithNSString:(NSString *)value;
- (NSString *)getNameSpace;
- (void)setNameSpaceWithNSString:(NSString *)value;
- (SymbolTable *)getParameters;
- (void)setParametersWithSymbolTable:(SymbolTable *)value;
- (BOOL)getIsLocal;
- (void)setIsLocalWithBoolean:(BOOL)value;
- (BOOL)getIsPublic;
- (void)setIsPublicWithBoolean:(BOOL)value;
- (id<ISymbol>)getParent;
- (void)setParentWithISymbol:(id<ISymbol>)value;
- (NSString *)getReference;
- (void)setReferenceWithNSString:(NSString *)value;
- (SymbolType)getUsage;
- (void)setUsageWithSymbolTypeEnum:(SymbolType)value;
-(BOOL)getHasVariableLengthParameterList;
- (id)getValue;
- (void)setValueWithId:(id)value;
- (BOOL)addWithISymbol:(id<ISymbol>)symbol;
- (BOOL)containsWithNSString:(NSString *)reference;
- (id<ISymbol>)lookupWithNSString:(NSString *)reference;
-(NSData *)serialize;
- (NSString *)toStringSummary;
@end

#endif // _ISymbol_H_
